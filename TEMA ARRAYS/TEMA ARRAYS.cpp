
#include <iostream>
void getTemp();
void printFirstFifthLast(int* ptr, int size);

int main()
{
   
    int array[50];
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    int* arrPtr = array;

    //getTemp();
    printFirstFifthLast(arrPtr, size);

}

void getTemp()
{
    double temp = 0;
    double temperaturi[7];
    int size = sizeof(temperaturi) / sizeof(double);
    double medie = 0;
    std::string askTemp = "Va rugam sa introduceti temperatura pentru : ";
    std::string day;
    /*std::cout << askTemp;
    std::cin >> temp;*/

    for (int i = 0; i < size; i++)
    {
        switch (i)
        {
            case 0:
            {
                day = "Luni ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
            case 1:
            {
                day = "Marti ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;

            }
            case 2:
            {
                day = "Miercuri ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
            case 3:
            {
                day = "Joi ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
            case 4:
            {
                day = "Vineri ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
            case 5:
            {
                day = "Sambata ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
            case 6:
            {
                day = "Duminica ";
                std::cout << askTemp << day << std::endl;
                std::cin >> temp;
                temperaturi[i] = temp;
                medie += temp;
                break;
            }
        }
    }
    medie = round((medie / size) * 100) / 100;
    std::cout << "Media saptamanala este " << medie << std::endl;
}
void printFirstFifthLast(int* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        switch (i)
        {
            case 0:
            {
                std::cout << "The value at 1ST index is " << *(ptr + i) << std::endl;
                break;
            }
            case 4:
            {
                std::cout << "The value at 5TH index is " << *(ptr +i) << std::endl;
                break;
            }
            case 49:
            {
                std::cout << "The value at LAST index is " << *(ptr + i) << std::endl;
                break;
            }
        }
    }
}
