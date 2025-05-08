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

        if (START == NULL || nim <= START->noMhs)
        {
            if ((START != NULL) && (nim == START->noMhs))
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
            return; 
        }

        Node *previous = START;
        Node *current = START;

    while ((current != NULL ) && (nim >= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        previous = current;
        current = current->next;
    }
    nodeBaru->next = current;
    previous->next = nodeBaru;
    }

    bool listEmpty()
    {
        return (START == NULL);
    }

    bool Search(int nim, Node **previous, Node **current)
    {
        *previous = START;
        *current = START;

        while ((*current != NULL) && (nim != (*current)->noMhs))
        {
            *previous = *current;
            *current =(*current)->next;
        }

        return (*current != NULL);
    }

    bool delNode(int nim)
    {
        Node *current, *previous;
        if (Search(nim, &previous, &current))
        return false;

        if (current == START)
        START = START->next;
        else
        previous->next = current->next;

        delete current;
        return true;

    }

    void traverse()
    {
        if(listEmpty())
        {
            cout << "\nList kosong:\n";
        }
        else
        {
            cout << "\nData didalam list adalah\n";
            Node *currentNode =START;
            while (currentNode!= NULL)
            {
                cout << currentNode->noMhs << endl;
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    SingleLinkedList mhs;
    int nim;
    char ch;
    while(1)
    {
        cout << endl
            <<"menu";
            cout << endl
                 << "1, Menambahkan data kedalam list" << endl;
            cout << "2, menghapus data dari dalam list" << endl;
            cout << "3, menampilkan semua data dalam list" << endl;
            cout << "4, mencari data dalam list" << endl;
            cout << "5, keluar" << endl;
            cout << endl
                 << "masukan pilihan (1-5):";
            cin >> ch;
            switch (ch)    
            cin >> ch;
            switch (ch)
            {
            case '1':
            {
                mhs.addNode();
            }
            break;

            case '2':
            {
                if (mhs.ListEmpty())
                {
                    cout << endl
                         << "list kosong" << endl;
                    break;
                }
                cout << endl;
            }

            }
                        
    }
    }
}
