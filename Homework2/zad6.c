#include<stdio.h>
#include<stdint.h>

void print(const uint64_t num)
{
    for (int i = 63; i >= 0 ; --i)
    {
        printf("%d", num & (1ull << i) ? 1 : 0);
    
    }
    printf("\n\n");
}

void input(uint8_t* position)
{
    do
    {
        printf("position: ");
        scanf("%hhd", position);
    }while((*position < 0) || (*position > 63));
}

void clearAttendance(uint64_t* mask, const uint8_t n)
{
    *mask &= ~(1ull << n);
}

void AttendanceInfo(uint64_t* mask, const uint8_t n)
{
    uint8_t result = (*mask & (1ull << n)) ? 1 : 0;
    printf("Student no.%d ", n);
    if(!result)
    {
        printf("do NOT ");
    }
    printf("attends\n");

}

void setAttendance(uint64_t* mask, const uint8_t n)
{
    *mask |= (1ull << n);
}

void changeAttendance(uint64_t* mask, const uint8_t n)
{
    *mask ^= (1ull << n);
}



int main()
{
    uint64_t num = 0;
    uint8_t option, position;

    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        printf("option: ");
        scanf("%hhd", &option);
        if (option == 1)
        {
            input(&position);
            setAttendance(&num, position);
        }
        else if (option == 2)
        {
            input(&position);
            clearAttendance(&num, position);
        }
        else if (option == 3)
        {
            input(&position);
            AttendanceInfo(&num, position);
        }
        else if (option == 4)
        {
            input(&position);
            changeAttendance(&num, position);
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            printf("\nwrong option\nchoose again!\n\n");
            continue;
        }
        print(num);
    }

    return 0;
}
