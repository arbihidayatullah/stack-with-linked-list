#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct 	element{
	int data;
	element *next;
};

element *head=NULL;

void init(){
	head = NULL;
}

bool isEmpty(){
	return head == NULL;
}

bool isFull(){
	if(isEmpty() == 1){
		return 0;}
	else {
		element *tmp;
		int a;
		tmp = head;
		while (tmp != '\0'){a++;
			tmp = tmp->next;}
		return a > MAX_STACK_SIZE-1;
	}
}

class MyStack{
    public:
    	
    int getTop(){
    	return head->data;
	}
    void push(int databaru){
		element *baru;
		baru = new element;
		baru->data = databaru;
		baru->next = NULL;
		if(isEmpty() == 1){
			baru->next = head;
			head = baru;
		}
		else{
			baru->next = head;
			head=baru;
		}
		cout<<"Nilai "<<getTop()<<" masuk\n";
	}
    void pop(){
    	element *hapus;
		int d;
		hapus = head;
		d = getTop();
		head = head->next;
		delete hapus;
		cout<<endl<<d<<" terambil\n";
    }
    
};

void printStackList(){
		
		cout<<"Deretan Stack :\n";
    	element *tmp;
		tmp = head;
		int a = 0;
			while(tmp != '\0'){
				tmp = tmp->next;a++;
			}
			tmp = head;
			while(tmp != '\0'){				
				cout<<" "<<tmp->data<<" ";
				tmp = tmp->next;
			}
			cout<<" ";
} 

int main(){
    char pilih, kembali;
    int data;
    MyStack s;
    do{
      	system("cls");
      	cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n";
      	cout<<"=       TUGAS PETRUK        =  \n";
      	cout<<"= STACK SINGLE LINKED LIST  =  \n";
      	cout<<"= Nama : Arbi Hidayatullah  =  \n";
      	cout<<"= Npm  : 1817051045         = \n";
      	cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n\n";
		printStackList();
      	cout<<"\n\nMenu :\n"; 
		cout<<"\n1. Masukkan Input/Push";
		cout<<"\n2. Masukkan yang akan dihapus/Pop";
		cout<<"\n3. Angka teratas";
		cout<<"\n4. EXIT\n\n";
		cout<<"Pilih menu = ";
		 
      	cin>>pilih;

      	switch(pilih){
      		case '1' :
      			if(isFull() == 0){
      				cout<<"\nMasukkan data : ";
            		cin>>data;
            		s.push(data);
            		}
				else
					cout<<"\nStack penuh!\n";
				break;
      		case '2' :
      			if (isEmpty() == 0){
				  	s.pop();
      			}
      			else
      				cout<<"\nStack  kosong!\n";
            		break;
            case '3' :
            	cout<<"\nangka yang berada di atas ialah : \n";
            	cout<<head->data;
            	break;
      		case '4' :
      			exit(0);
            		break;
      		default :
            		cout<<"\nPilih ulang"<<endl;
      	}
      	cout<<"\nKembali ke menu?(y/n)\n= ";
      	cin>>kembali;
    }
	while(kembali=='y' || kembali=='Y');

    return 0;
}
