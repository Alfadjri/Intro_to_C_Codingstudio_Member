#include<iostream>
using namespace std;
// membuat struktur data
struct Node{
    int data;
    Node* next;
};

int main(){
    // inisialisasi nilai
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    //  siapkan ruangan untuk node;
    head = new Node();
    second = new Node();
    third = new Node();

    // mulai masukin data 
    head->data = 1;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 20;
    third->next = nullptr;
    //  mengarahkan kembali kursor atau ke posisi awal 
    Node* currnet = head;
    cout << "LInked  list : " << endl;
    while(currnet != nullptr){
        cout << currnet->data << endl;
        currnet = currnet->next;
    }
    // membebaskan memory atau delete
    delete head;
    delete second;
    delete third;


    return 0;
}