#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class list
{
    Node *START;

public:
    list()
    {
        START = NULL;
    }
    void addNode()
    {
        int nim;
        cout << "\nMasukan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if
    }
}