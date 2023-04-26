#include<iostream>
using namespace std;

template<class T>
class People
{
    private:
        T age;
        T work_year;   
    public:
        People(T _age, T _work_year);
        SetAge(T _age);
        T GetAge();
        T GetWorkYear();
};

template<class T>
People<T>::People(T _age, T _work_year)
{
    this->age = this->work_year = _age;
}

template<class T>
People<T>::SetAge(T _age)
{
    this->age = _age;
}

template<class T>
T People<T>::GetAge()
{
    return this->age;
}

template<class T>
T People<T>::GetWorkYear()
{
    return this->work_year;
}

int main()
{
    People<int> p(25,1);
    cout<<p.GetAge()<<endl;
    p.SetAge(20);
    cout<<p.GetAge()<<endl;
    cout<<p.GetWorkYear()<<endl;
}