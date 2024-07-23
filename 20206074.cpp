#include <iostream>
using namespace std;

class IntegerSet
{
    private:
        int emptytSet[101];
    public:
        IntegerSet();
        IntegerSet(int[],int);
        void insertElement(int);
        void deleteElement(int);
        IntegerSet unionOfSets(IntegerSet&);
        IntegerSet intersectionOfSets(IntegerSet&);
        IntegerSet operator - (IntegerSet&);
        IntegerSet operator ! ();
        bool isEqualTo(IntegerSet&);
        void printSet();
};

int main()
{
    int array1[11] = {0, 1, 2, 3, 5, 6, 7, 8, 15, 18, 23};
    int array2[11] = {0, 1, 2, 3, 5, 6, 7, 8, 15, 16, 23};
    int array3[15] = {0, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 30, 32};
    IntegerSet set1(array1, 11), set2(array2, 11), set3(array3, 15), unionOfSets, intersectionOfSets, differenceSet, isEqualToSet, ComplementOfSet;

    unionOfSets = set1.unionOfSets(set3);
    intersectionOfSets = set1.intersectionOfSets(set3);
    differenceSet = set3 - set1;
    ComplementOfSet = !set1;

    cout << "> set1 = ";
    set1.printSet();
    cout << "> set2 = ";
    set2.printSet();
    cout << "> set3 = ";
    set3.printSet();
    cout << endl;
    cout << "1)set1 UNION set3 = ";
    unionOfSets.printSet();
    cout << "2)set1 INTERSECT set3 = ";
    intersectionOfSets.printSet();
    cout << "3)set3 - set1 = ";
    differenceSet.printSet();
    cout << "4)!set1 = ";
    ComplementOfSet.printSet();

    if (set1.isEqualTo(set2) == 1)
        cout << "5)set1 and set2 are equale";
    else
        cout << "5)set1 and set2 are not equale" << endl;

    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "Sets after using:- " << endl;
    cout << "-member function deleteElement to delete element(18) from set1" << endl;
    cout << "-member function insertElement to insert element(16) to set1" << endl << endl;

    set1.deleteElement(18);
    set1.insertElement(16);
    unionOfSets = set1.unionOfSets(set3);
    intersectionOfSets = set1.intersectionOfSets(set3);
    differenceSet = set3 - set1;
    ComplementOfSet = !set1;

    cout << "> set1 = ";
    set1.printSet();
    cout << "> set2 = ";
    set2.printSet();
    cout << "> set3 = ";
    set3.printSet();
    cout << endl;
    cout << "1)set1 UNION set3 = ";
    unionOfSets.printSet();
    cout << "2)set1 INTERSECT set3 = ";
    intersectionOfSets.printSet();
    cout << "3)set3 - set1 = ";
    differenceSet.printSet();
    cout << "4)!set1 = ";
    ComplementOfSet.printSet();

    if (set1.isEqualTo(set2) == 1)
        cout << "5)set1 and set2 are equale";
    else
        cout << "5)set1 and set2 are not equale";

    return 0;
}

IntegerSet::IntegerSet()
{
    for(int i = 0; i < 101; i++)
    {
        emptytSet[i] = 0;
    }
}

IntegerSet::IntegerSet(int Set[], int sizeOfSet)
{
    for(int i = 0; i < 101; i++)
    {
        emptytSet[i] = 0;
    }
    for(int i = 0; i < sizeOfSet; i++)
    {
        if(Set[i] >= 0 && Set[i] <= 100)
            emptytSet[Set[i]] = 1;
    }
}

void IntegerSet::insertElement(int k)
{
    emptytSet[k] = 1;
}

void IntegerSet::deleteElement(int m)
{
    emptytSet[m] = 0;
}

IntegerSet IntegerSet::unionOfSets(IntegerSet &Set)
{
    IntegerSet unionSet;
    for (int i = 0; i < 101; i++)
    {
        if(emptytSet[i] == 1 || Set.emptytSet[i]  == 1)
            unionSet.emptytSet[i] = 1;
    }
    return unionSet;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet &Set)
{
    IntegerSet intersectionSet;
    for (int i = 0; i < 101; i++)
    {
        if(emptytSet[i] == 1 && Set.emptytSet[i]  == 1)
        {
            intersectionSet.emptytSet[i] = 1;
        }
    }
    return intersectionSet;
}

IntegerSet IntegerSet::operator - (IntegerSet &Set)
{
    IntegerSet differenceSet;
    for (int i = 0; i < 101; i++)
    {
        if(emptytSet[i] == 1 && Set.emptytSet[i]  == 0)
            differenceSet.emptytSet[i] = 1;
    }
    return differenceSet;
}

IntegerSet IntegerSet::operator ! ()
{
    IntegerSet ComplementOfSet;
    for (int i = 0; i < 101; i++)
    {
        if(emptytSet[i] == 0)
            ComplementOfSet.emptytSet[i] = 1;
    }
    return ComplementOfSet;
}

bool IntegerSet::isEqualTo(IntegerSet &Set)
{
    for(int i = 0; i < 101; i++)
    {
        if(emptytSet[i] != Set.emptytSet[i])
        return 0;
    }
    return 1;
}

void IntegerSet::printSet()
{
    cout << "{";
    for(int i = 0; i < 101; i++)
    {
        if(emptytSet[i] == 1)
            cout << i;
            if(emptytSet[i+1] == 1)
                cout << " ,";
    }
    cout << "}" << endl;
}
