#include <iostream>

using namespace std;

int main(void)
{
    char prenom[10];
    int age;

    cout << "Entrez votre prénom :";
    cin >> prenom;
    cout << endl << "Entrez votre age :";
    cin >> age;

    cout << endl << prenom << " a " << age << " ans" << endl;

    return EXIT_SUCCESS;
}