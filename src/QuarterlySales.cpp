// This program determines and displays the highest quarterly sales out of the
// the four divisions, Northwest, Northeast, Southwest, Southeast.

#include <iostream>

using namespace std;

int getSales(string division)

{
    float sales;
    cout << "Enter the quarterly sales for the " << division << " division: ";
    cin >> sales;
    while (sales < 0)
    {
        cout << "Sales figures cannot be negative. Please re-enter." << endl;
        cout << "Enter the quarterly sales for the " << division << " division: ";
        cin >> sales;
    }
    return sales;
}

void findHighest(float salesD1, float salesD2, float salesD3, float salesD4)
{
    if ((salesD1 > salesD2) && (salesD1 > salesD3) && (salesD1 > salesD4))
    {
        cout << "The Northeast division had the highest sales this quarter."
             << endl <<"Their sales were $" << salesD1 << endl;
    }
    if ((salesD2 > salesD1) && (salesD2 > salesD3) && (salesD2 > salesD4))
    {
        cout << "The Northwest division had the highest sales this quarter."
             << endl <<"Their sales were $" << salesD2 << endl;
    }
    if ((salesD3 > salesD1) && (salesD3 > salesD2) && (salesD3 > salesD4))
    {
        cout << "The Southwest division had the highest sales this quarter."
             << endl << "Their sales were $" << salesD3 << endl;
    }
    if ((salesD4 > salesD1) && (salesD4 > salesD2) && (salesD4 > salesD3))
    {
        cout << "The Southeast division had the highest sales this quarter."
             << endl << "Their sales were $" << salesD4 << endl;
    }

}
int main()
{
    float salesD1 = getSales("Northeast");
    float salesD2 = getSales("Northwest");
    float salesD3 = getSales("Southwest");
    float salesD4 = getSales("Southeast");

    findHighest(salesD1, salesD2, salesD3, salesD4);

    return 0;
}
