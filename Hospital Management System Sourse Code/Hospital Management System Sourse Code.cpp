#include <iostream>
#include <vector>
using namespace std;

struct Address
{
    string Street;
    string Region;
    string State;

    Address() : Street(" "), Region(" "), State(" ") {}

    void Print_Address()
    {
        cout << "Street : " << Street << endl;
        cout << "City : " << Region << endl;
        cout << "State : " << State << endl;
    }
};
class Nurse
{
private:
    string Supervisor;
    string Specialization;
    string Department;
    int Years_Of_Experience;
    int ID;
    string Phone_Number;
    int Age;
    string Name;
    Address Address_;
    string Gender;

public:
    Nurse* Link_Nurse;
    Nurse* Head_Nurse;
    Nurse* Last_Nurse;

    Nurse() : Link_Nurse(NULL), Head_Nurse(NULL), Last_Nurse(NULL), Years_Of_Experience(0), ID(0), Age(0), Supervisor(""), Specialization(""), Department(""), Phone_Number(""), Name(""), Gender("") {}

    void Create_And_Add_Nurse()
    {
        Nurse* newNurse = new Nurse;
        if (Head_Nurse == NULL)
        {
            Head_Nurse = newNurse;
            Last_Nurse = newNurse;
        }
        else
        {
            Last_Nurse->Link_Nurse = newNurse;
            Last_Nurse = newNurse;
        }
        Last_Nurse->Link_Nurse = NULL;

        cout << "Enter The Nurse Information." << endl;
        Input_The_Data(newNurse);
    }

    void Input_The_Data(Nurse* nurse)
    {
        cout << "Enter The Name : ";
        cin >> nurse->Name;

        cout << "Enter The Age : ";
        cin >> nurse->Age;

        if (nurse->Age < 0)
        {
            cout << "Not Valid : Age Cannot Be Negative." << endl;
            nurse->Age = 0;
        }

        cout << "Enter The Phone Number : ";
        cin >> nurse->Phone_Number;

        cout << "Enter The ID : ";
        cin >> nurse->ID;

        cout << "Enter The Gender : ";
        cin >> nurse->Gender;

        cout << "Enter The Address {City State Street} : ";
        cin >> nurse->Address_.Region >> nurse->Address_.State >> nurse->Address_.Street;

        cout << "Enter The Supervisor Name : ";
        cin >> nurse->Supervisor;

        cout << "Enter The Years Of Experience : ";
        cin >> nurse->Years_Of_Experience;

        cout << "Enter The Specialization : ";
        cin >> nurse->Specialization;

        cout << "Enter The Department : ";
        cin >> nurse->Department;
    }

    void Print_The_Nurse_List()
    {
        int Counter = 1;
        Nurse* Curr_Nurse = Head_Nurse;
        while (Curr_Nurse != NULL)
        {
            cout << endl;
            cout << "Nurse " << Counter << " Details : " << endl;
            cout << "Name : " << Curr_Nurse->Name << endl;
            cout << "Age : " << Curr_Nurse->Age << endl;
            cout << "Phone Number : " << Curr_Nurse->Phone_Number << endl;
            cout << "ID : " << Curr_Nurse->ID << endl;
            cout << "Gender : " << Curr_Nurse->Gender << endl;
            cout << "Address : ";
            Curr_Nurse->Address_.Print_Address();
            cout << "Supervisor : " << Curr_Nurse->Supervisor << endl;
            cout << "Years Of Experience : " << Curr_Nurse->Years_Of_Experience << endl;
            cout << "Specialization : " << Curr_Nurse->Specialization << endl;
            cout << "Department : " << Curr_Nurse->Department << endl;
            Counter++;
            Curr_Nurse = Curr_Nurse->Link_Nurse;
        }
        if (Counter == 1)
        {
            cout << "No Nurse Found." << endl;
        }
    }

    void Edit_The_Nurse_Information()
    {
        string Name;

        cout << "Enter The Name Of The Nurse You Want To Edit : ";
        cin >> Name;

        cout << endl;

        Nurse* Temp_Nurse = Head_Nurse;
        bool Found = false;

        while (Temp_Nurse != NULL)
        {
            if (Temp_Nurse->Name == Name)
            {
                Found = true;
                cout << "Editing Details For: " << Name << endl;

                cout << "1. Name\n2. Age\n3. Phone Number\n4. ID\n5. Gender\n6. Address\n7. Supervisor Name\n8. Years Of Experience\n9. Specialization\n10. Department\n11. Edit All\nEnter Your Choice: ";

                int Choice;
                cin >> Choice;

                switch (Choice) {
                case 1:
                    cout << "Enter New Name : ";
                    cin >> Temp_Nurse->Name;
                    break;
                case 2:
                    cout << "Enter New Age : ";
                    cin >> Temp_Nurse->Age;

                    if (Temp_Nurse->Age < 0) {
                        cout << "Not Valid : Age Can't Be Negative." << endl;
                        Temp_Nurse->Age = 0;
                    }
                    break;
                case 3:
                    cout << "Enter New Phone Number : ";
                    cin >> Temp_Nurse->Phone_Number;
                    break;
                case 4:
                    cout << "Enter New ID : ";
                    cin >> Temp_Nurse->ID;
                    break;
                case 5:
                    cout << "Enter New Gender : ";
                    cin >> Temp_Nurse->Gender;
                    break;
                case 6:
                    cout << "Enter New Address {City State Street} : ";
                    cin >> Temp_Nurse->Address_.Region >> Temp_Nurse->Address_.State >> Temp_Nurse->Address_.Street;
                    break;
                case 7:
                    cout << "Enter New Supervisor Name : ";
                    cin >> Temp_Nurse->Supervisor;
                    break;
                case 8:
                    cout << "Enter New Years Of Experience : ";
                    cin >> Temp_Nurse->Years_Of_Experience;
                    break;
                case 9:
                    cout << "Enter New Specialization : ";
                    cin >> Temp_Nurse->Specialization;
                    break;
                case 10:
                    cout << "Enter New Department : ";
                    cin >> Temp_Nurse->Department;
                    break;
                case 11:
                    cout << "Enter New Name : ";
                    cin >> Temp_Nurse->Name;

                    cout << "Enter New Age : ";
                    cin >> Temp_Nurse->Age;

                    if (Temp_Nurse->Age < 0)
                    {
                        cout << "Not Valid : Age Can't Be Negative." << endl;
                        Temp_Nurse->Age = 0;
                    }

                    cout << "Enter New Phone Number : ";
                    cin >> Temp_Nurse->Phone_Number;

                    cout << "Enter New ID : ";
                    cin >> Temp_Nurse->ID;

                    cout << "Enter New Gender : ";
                    cin >> Temp_Nurse->Gender;

                    cout << "Enter New Address {City State Street} : ";
                    cin >> Temp_Nurse->Address_.Region >> Temp_Nurse->Address_.State >> Temp_Nurse->Address_.Street;

                    cout << "Enter New Supervisor Name: ";
                    cin >> Temp_Nurse->Supervisor;

                    cout << "Enter New Years Of Experience : ";
                    cin >> Temp_Nurse->Years_Of_Experience;

                    cout << "Enter New Specialization : ";
                    cin >> Temp_Nurse->Specialization;

                    cout << "Enter New Department : ";
                    cin >> Temp_Nurse->Department;
                    break;
                default:
                    cout << "Invalid Choice." << endl;
                }
                cout << "\nInformation Edited Successfully.\n" << endl;
                break;
            }
            Temp_Nurse = Temp_Nurse->Link_Nurse;
        }

        if (!Found)
        {
            cout << "Nurse With Name " << Name << " Not Found." << endl;
        }
    }

    void Delete_Nurse()
    {
        string Name;

        cout << "Enter The Name Of The Nurse You Want To Delete: ";
        cin >> Name;

        Nurse* Prev_Nurse = NULL;
        Nurse* Curr_Nurse = Head_Nurse;

        while (Curr_Nurse != NULL)
        {
            if (Curr_Nurse->Name == Name)
            {
                if (Curr_Nurse == Head_Nurse)
                {
                    Head_Nurse = Curr_Nurse->Link_Nurse;
                }
                else
                {
                    Prev_Nurse->Link_Nurse = Curr_Nurse->Link_Nurse;
                }
                delete Curr_Nurse;
                cout << "The Nurse " << Name << " Has Been Deleted." << endl;
                return;
            }
            Prev_Nurse = Curr_Nurse;
            Curr_Nurse = Curr_Nurse->Link_Nurse;
        }
        cout << "Nurse With Name " << Name << " Not Found." << endl;
    }
};


class Stack
{
private:
    string Name;
    int Year;

public:
    Stack* Head_Stack;
    Stack* Last_Stack;
    Stack* Curr;

    Stack() : Head_Stack(NULL), Last_Stack(NULL), Curr(NULL), Name(""), Year(0) {}

    void Push(string name, int year)
    {
        Stack* newStack = new Stack;
        newStack->Name = name;
        newStack->Year = year;

        if (Head_Stack == NULL)
        {
            Head_Stack = newStack;
            Last_Stack = newStack;
        }
        else
        {
            newStack->Curr = Head_Stack;
            Head_Stack = newStack;
        }
    }

    void Pop()
    {
        if (Head_Stack == NULL)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            Stack* temp = Head_Stack;
            Head_Stack = Head_Stack->Curr;
            delete temp;
            cout << "Top Element Has Been Popped." << endl;
        }
    }

    void Display()
    {
        Curr = Head_Stack;
        while (Curr != NULL)
        {
            cout << "Name: " << Curr->Name << ", Year: " << Curr->Year << endl;
            Curr = Curr->Curr;
        }
    }
};
class Queue
{
private:
    string Name;
    int Age;

public:
    Queue* Front;
    Queue* Rear;
    Queue* Next;

    Queue() : Front(NULL), Rear(NULL), Next(NULL), Name(""), Age(0) {}

    void Enqueue(string name, int age)
    {
        Queue* newQueue = new Queue;
        newQueue->Name = name;
        newQueue->Age = age;

        if (Front == NULL)
        {
            Front = newQueue;
            Rear = newQueue;
        }
        else
        {
            Rear->Next = newQueue;
            Rear = newQueue;
        }
    }

    void Dequeue()
    {
        if (Front == NULL)
        {
            cout << "Queue is Empty." << endl;
        }
        else
        {
            Queue* temp = Front;
            Front = Front->Next;
            delete temp;
            cout << "Front Element Has Been Dequeued." << endl;
        }
    }

    void Display()
    {
        Queue* curr = Front;
        while (curr != NULL)
        {
            if (curr != NULL)
            {
                cout << "Name: " << curr->Name << ", Age: " << curr->Age << endl;
                curr = curr->Next;
            }
            else
                cout << "Queue is Empty." << endl;
        }
    }
};



class Doctor
{
private:
    string Specialty;
    int License_Number;
    int Years_Of_Experience;
    string Department;
    string Phone_Number;
    int Age;
    string Name;
    Address Address_;
    string Gender;

public:

    Doctor* Link_Doctor;
    Doctor* Head_Doctor;
    Doctor* Last_Doctor;
    Stack Doctor_Stack;

    Doctor() : Link_Doctor(NULL), Head_Doctor(NULL), Last_Doctor(NULL), Specialty(""), License_Number(0), Years_Of_Experience(0), Department(""), Phone_Number(""), Age(0), Name(""), Gender("") {}

    void Create_And_Add_Doctor()
    {
        Doctor* newDoctor = new Doctor;
        if (Head_Doctor == NULL)
        {
            Head_Doctor = newDoctor;
            Last_Doctor = newDoctor;
        }
        else
        {
            Last_Doctor->Link_Doctor = newDoctor;
            Last_Doctor = newDoctor;
        }
        Last_Doctor->Link_Doctor = NULL;

        cout << "Enter The Doctor Information." << endl;
        Input_The_Data(newDoctor);

        Doctor_Stack.Push(newDoctor->Name, newDoctor->Years_Of_Experience);
    }

    void Input_The_Data(Doctor* doctor)
    {
        cout << "Enter The Name : ";
        cin >> doctor->Name;

        cout << "Enter The Age : ";
        cin >> doctor->Age;

        if (doctor->Age < 0)
        {
            cout << "Not Valid : Age Cannot Be Negative." << endl;
            doctor->Age = 0;
        }

        cout << "Enter The Phone Number : ";
        cin >> doctor->Phone_Number;

        cout << "Enter The License Number : ";
        cin >> doctor->License_Number;

        cout << "Enter The Gender : ";
        cin >> doctor->Gender;

        cout << "Enter The Address {City State Street} : ";
        cin >> doctor->Address_.Region >> doctor->Address_.State >> doctor->Address_.Street;

        cout << "Enter The Years Of Experience : ";
        cin >> doctor->Years_Of_Experience;

        cout << "Enter The Specialty : ";
        cin >> doctor->Specialty;

        cout << "Enter The Department : ";
        cin >> doctor->Department;
    }

    void Print_The_Doctor_List()
    {
        Doctor* Curr_Doctor = Head_Doctor;
        while (Curr_Doctor != NULL)
        {
            cout << endl;
            cout << "Doctor Details : " << endl;
            cout << "Name : " << Curr_Doctor->Name << endl;
            cout << "Age : " << Curr_Doctor->Age << endl;
            cout << "Phone Number : " << Curr_Doctor->Phone_Number << endl;
            cout << "License Number : " << Curr_Doctor->License_Number << endl;
            cout << "Gender : " << Curr_Doctor->Gender << endl;
            Curr_Doctor->Address_.Print_Address();
            cout << "Years Of Experience : " << Curr_Doctor->Years_Of_Experience << endl;
            cout << "Specialty : " << Curr_Doctor->Specialty << endl;
            cout << "Department : " << Curr_Doctor->Department << endl;
            Curr_Doctor = Curr_Doctor->Link_Doctor;
            cout << endl;
        }
    }

    void Print_Doctor_Stack()
    {
        cout << "Doctor Stack:" << endl;
        Doctor_Stack.Display();
    }

    void Edit_Doctor_Information()
    {
        string Name;

        cout << "Enter The Name Of The Doctor You Want To Edit : ";
        cin >> Name;

        Doctor* Temp_Doctor = Head_Doctor;

        while (Temp_Doctor != NULL)
        {
            if (Temp_Doctor->Name == Name)
            {
                cout << "Enter The New Information For Doctor " << Name << ":" << endl;
                cout << "1. Name\n2. Age\n3. Phone Number\n4. License Number\n5. Gender\n6. Address\n7. Years Of Experience\n8. Specialty\n9. Department\n10. Edit All\nEnter Your Choice: ";
                int Choice;
                cin >> Choice;

                switch (Choice) {
                case 1:
                    cout << "Enter The Name : ";
                    cin >> Temp_Doctor->Name;
                    break;
                case 2:
                    cout << "Enter The Age : ";
                    cin >> Temp_Doctor->Age;

                    if (Temp_Doctor->Age < 0)
                    {
                        cout << "Not Valid : Age Can't Be Negative." << endl;
                        Temp_Doctor->Age = 0;
                    }
                    break;
                case 3:
                    cout << "Enter The Phone Number : ";
                    cin >> Temp_Doctor->Phone_Number;
                    break;
                case 4:
                    cout << "Enter The License Number : ";
                    cin >> Temp_Doctor->License_Number;
                    break;
                case 5:
                    cout << "Enter The Gender : ";
                    cin >> Temp_Doctor->Gender;
                    break;
                case 6:
                    cout << "Enter The Address {City State Street} : ";
                    cin >> Temp_Doctor->Address_.Region >> Temp_Doctor->Address_.State >> Temp_Doctor->Address_.Street;
                    break;
                case 7:
                    cout << "Enter The Years Of Experience : ";
                    cin >> Temp_Doctor->Years_Of_Experience;
                    break;
                case 8:
                    cout << "Enter The Specialty : ";
                    cin >> Temp_Doctor->Specialty;
                    break;
                case 9:
                    cout << "Enter The Department : ";
                    cin >> Temp_Doctor->Department;
                    break;
                case 10:
                    cout << "Enter The Name : ";
                    cin >> Temp_Doctor->Name;

                    cout << "Enter The Age : ";
                    cin >> Temp_Doctor->Age;

                    if (Temp_Doctor->Age < 0)
                    {
                        cout << "Not Valid : Age Can't Be Negative." << endl;
                        Temp_Doctor->Age = 0;
                    }

                    cout << "Enter The Phone Number : ";
                    cin >> Temp_Doctor->Phone_Number;

                    cout << "Enter The License Number : ";
                    cin >> Temp_Doctor->License_Number;

                    cout << "Enter The Gender : ";
                    cin >> Temp_Doctor->Gender;

                    cout << "Enter The Address {City State Street} : ";
                    cin >> Temp_Doctor->Address_.Region >> Temp_Doctor->Address_.State >> Temp_Doctor->Address_.Street;

                    cout << "Enter The Years Of Experience : ";
                    cin >> Temp_Doctor->Years_Of_Experience;

                    cout << "Enter The Specialty : ";
                    cin >> Temp_Doctor->Specialty;

                    cout << "Enter The Department : ";
                    cin >> Temp_Doctor->Department;
                    break;
                default:
                    cout << " Invalid Choice." << endl;
                }
                cout << "Information Updated Successfully." << endl;
                return;
            }
            Temp_Doctor = Temp_Doctor->Link_Doctor;
        }

        cout << "Doctor With Name " << Name << " Not Found." << endl;
    }

    void Delete_Doctor()
    {
        string Name;
        cout << "Enter The Name Of The Doctor You Want To Delete : ";
        cin >> Name;

        Doctor* Curr_Doctor = Head_Doctor;

        if (Head_Doctor != NULL && Head_Doctor->Name == Name)
        {
            Doctor* Temp_Doctor = Head_Doctor;
            Head_Doctor = Head_Doctor->Link_Doctor;
            delete Temp_Doctor;
            cout << "The Doctor " << Name << " Has Been Deleted." << endl;
            return;
        }

        while (Curr_Doctor != NULL && Curr_Doctor->Link_Doctor != NULL)
        {
            if (Curr_Doctor->Link_Doctor->Name == Name)
            {
                Doctor* Temp_Doctor = Curr_Doctor->Link_Doctor;
                Curr_Doctor->Link_Doctor = Curr_Doctor->Link_Doctor->Link_Doctor;
                delete Temp_Doctor;
                cout << "The Doctor " << Name << " Has Been Deleted." << endl;
                return;
            }
            Curr_Doctor = Curr_Doctor->Link_Doctor;
        }

        cout << "Doctor With Name " << Name << " Not Found." << endl;
    }
};


class Patient
{
private:
    string Disease;
    string Room_Type;
    int Room_Number;
    string Blood_Group;
    string Phone_Number;
    int Age;
    string Name;
    Address Address_;
    string Gender;
    string Status;

public:

    Patient* Link;
    Patient* Head;
    Patient* Last;

    Patient() : Link(NULL), Head(NULL), Last(NULL), Disease(" "), Room_Type(" "), Room_Number(0), Blood_Group(" "), Phone_Number(" "), Age(0), Name(" "), Gender(" "), Status(" ") {}

    void Create_And_Add_Patient()
    {
        Patient* newPatient = new Patient;
        if (Head == NULL)
        {
            Head = newPatient;
            Last = newPatient;
        }
        else
        {
            Last->Link = newPatient;
            Last = newPatient;
        }
        Last->Link = NULL;

        cout << "Enter The Patient Information." << endl;
        Input_The_Data(newPatient);
    }

    void Input_The_Data(Patient* patient)
    {
        cout << "Enter The Name : ";
        cin >> patient->Name;

        cout << "Enter The Age : ";
        cin >> patient->Age;

        if (patient->Age < 0)
        {
            cout << "Not Valid : Age Cannot Be Negative." << endl;
            patient->Age = 0;
        }

        cout << "Enter The Phone Number : ";
        cin >> patient->Phone_Number;

        cout << "Enter The Gender : ";
        cin >> patient->Gender;

        cout << "Enter The Address {City State Street} : ";
        cin >> patient->Address_.Region >> patient->Address_.State >> patient->Address_.Street;

        cout << "Enter The Blood Group : ";
        cin >> patient->Blood_Group;

        cout << "Enter The Disease : ";
        cin >> patient->Disease;

        cout << "Enter The Room Type : ";
        cin >> patient->Room_Type;

        cout << "Enter The Room Number : ";
        cin >> patient->Room_Number;

        cout << "Enter The Status : ";
        cin >> patient->Status;
    }

    void Print_The_Patient_List()
    {
        Patient* Curr = Head;
        while (Curr != NULL)
        {
            cout << endl;
            cout << "Name: " << Curr->Name << endl;
            cout << "Age: " << Curr->Age << endl;
            cout << "Phone Number: " << Curr->Phone_Number << endl;
            cout << "Gender: " << Curr->Gender << endl;
            cout << "Address: " << Curr->Address_.Region << " " << Curr->Address_.State << " " << Curr->Address_.Street << endl;
            cout << "Blood Group: " << Curr->Blood_Group << endl;
            cout << "Disease: " << Curr->Disease << endl;
            cout << "Room Type: " << Curr->Room_Type << endl;
            cout << "Room Number: " << Curr->Room_Number << endl;
            cout << "Status: " << Curr->Status << endl;
            Curr = Curr->Link;
        }
    }

    void Edit_Patient_Information()
    {
        string Name;

        cout << "Enter The Name Of Patient You Want To Edit: ";
        cin >> Name;

        Patient* Temp = Head;
        while (Temp != NULL)
        {
            if (Temp->Name == Name)
            {
                cout << "Choices : " << endl;
                cout << "1. Name\n2. Age\n3. Phone Number\n4. Gender\n5. Address\n6. Disease\n7. Room Type\n8. Room Number\n9. Status\n10. Blood Group\n11. Edit All\nEnter Your Choice: ";
                int Choice = 0;
                cin >> Choice;

                switch (Choice)
                {
                case 1:
                    cout << "Enter The Name : ";
                    cin >> Temp->Name;
                    break;
                case 2:
                    cout << "Enter The Age : ";
                    cin >> Temp->Age;

                    if (Temp->Age < 0) {
                        cout << "Not Valid : Age Can't Be Negative." << endl;
                        Temp->Age = 0;
                    }
                    break;
                case 3:
                    cout << "Enter The Phone Number : ";
                    cin >> Temp->Phone_Number;
                    break;
                case 4:
                    cout << "Enter The Gender : ";
                    cin >> Temp->Gender;
                    break;
                case 5:
                    cout << "Enter The Address {City State Street} : ";
                    cin >> Temp->Address_.Region >> Temp->Address_.State >> Temp->Address_.Street;
                    break;
                case 6:
                    cout << "Enter The Disease : ";
                    cin >> Temp->Disease;
                    break;
                case 7:
                    cout << "Enter The Room Type: ";
                    cin >> Temp->Room_Type;
                    break;
                case 8:
                    cout << "Enter The Room Number : ";
                    cin >> Temp->Room_Number;
                    break;
                case 9:
                    cout << "Enter The Status : ";
                    cin >> Temp->Status;
                    break;
                case 10:
                    cout << "Enter The Blood Group : ";
                    cin >> Temp->Blood_Group;
                    break;
                case 11:
                    cout << "Enter The Name : ";
                    cin >> Temp->Name;

                    cout << "Enter The Age : ";
                    cin >> Temp->Age;

                    if (Temp->Age < 0) {
                        cout << "Not Valid : Age Cannot Be Negative." << endl;
                        Temp->Age = 0;
                    }

                    cout << "Enter The Phone Number : ";
                    cin >> Temp->Phone_Number;

                    cout << "Enter The Gender : ";
                    cin >> Temp->Gender;

                    cout << "Enter The Address {City State Street} : ";
                    cin >> Temp->Address_.Region >> Temp->Address_.State >> Temp->Address_.Street;

                    cout << "Enter The Disease : ";
                    cin >> Temp->Disease;

                    cout << "Enter The Room Type : ";
                    cin >> Temp->Room_Type;

                    cout << "Enter The Room Number : ";
                    cin >> Temp->Room_Number;

                    cout << "Enter The Status : ";
                    cin >> Temp->Status;
                    break;
                default:
                    cout << " Invalid Choice." << endl;
                }
                cout << "Information Updated Successfully." << endl;
                return;
            }
            Temp = Temp->Link;
        }

        cout << "Patient With Name " << Name << " Not Found." << endl;
    }

    void Delete_Patient()
    {
        string Name;

        cout << "Enter The Name Of Patient You Want To Delete: ";
        cin >> Name;

        Patient* Curr = Head;
        Patient* Prev = NULL;

        while (Curr != NULL)
        {
            if (Curr->Name == Name)
            {
                if (Prev == NULL)
                {
                    Head = Curr->Link;
                }
                else
                {
                    Prev->Link = Curr->Link;
                }
                delete Curr;
                cout << "Patient With Name " << Name << " Deleted Successfully." << endl;
                return;
            }
            Prev = Curr;
            Curr = Curr->Link;
        }
        cout << "Patient With Name " << Name << " Not Found." << endl;
    }
};



struct Node
{
    string Name;
    Node* left;
    Node* right;
    Node(string name) : Name(name), left(NULL), right(NULL) {}
};
class Visitor
{
private:



    Node* root;
    vector<string> visitorNames;
    static const int HASH_SIZE = 100;
    vector<string> hashTable[HASH_SIZE];

    int HashFunction(string name)
    {
        int hash = 0;
        for (char ch : name)
        {
            hash = (hash * 31 + ch) % HASH_SIZE;
        }
        return hash;
    }

public:
    Visitor() : root(NULL) {}

    void Insert(string name)
    {
        root = InsertRec(root, name);
        visitorNames.push_back(name);

        int index = HashFunction(name);
        hashTable[index].push_back(name);
    }

    Node* InsertRec(Node* node, string name)
    {
        if (node == NULL)
        {
            return new Node(name);
        }

        if (name < node->Name)
        {
            node->left = InsertRec(node->left, name);
        }
        else if (name > node->Name)
        {
            node->right = InsertRec(node->right, name);
        }

        return node;
    }

    void PrintTree()
    {
        PrintTreeRec(root);
    }

    void PrintTreeRec(Node* node)
    {
        if (node != NULL)
        {
            PrintTreeRec(node->left);
            cout << "Name: " << node->Name << endl;
            PrintTreeRec(node->right);
        }
    }

    void PrintVector()
    {
        cout << "Visitor Names: ";
        for (const auto& name : visitorNames)
        {
            cout << name << " ";
        }
        cout << endl;
    }

    bool Retrieve(string name)
    {
        Node* foundNode = RetrieveRec(root, name);
        return (foundNode != NULL);
    }

    Node* RetrieveRec(Node* node, string name)
    {
        if (node == NULL)
        {
            return NULL;
        }

        if (name < node->Name)
        {
            return RetrieveRec(node->left, name);
        }
        else if (name > node->Name)
        {
            return RetrieveRec(node->right, name);
        }
        else
        {
            return node;
        }
    }

    bool RetrieveFromHashTable(string name)
    {
        int index = HashFunction(name);
        for (const auto& storedName : hashTable[index])
        {
            if (storedName == name)
            {
                return true;
            }
        }
        return false;
    }

    void PrintHashTable()
    {
        for (int i = 0; i < HASH_SIZE; ++i)
        {
            if (!hashTable[i].empty())
            {
                cout << "Index " << i << ": ";
                for (const auto& name : hashTable[i])
                {
                    cout << name << " ";
                }
                cout << endl;
            }
        }
    }
};
class Hospital
{
private:
    string Hospital_Name;
    string Hospital_Location;
    Doctor Doctor_List;
    Patient Patient_List;
    Nurse Nurse_List;
    Queue Emergency_Patient_Queue;
    Visitor Visitor_List;

public:
    void Input_Hospital_Information()
    {
        cout << "\nEnter The Hospital Information." << endl;
        cout << "Enter The Name Of Hospital : ";
        cin >> Hospital_Name;
        cout << "Enter The Location Of Hospital : ";
        cin >> Hospital_Location;
        cout << endl;
    }

    void Print_Hospital_Information()
    {
        cout << "Hospital Information :" << endl;
        cout << "Name : " << Hospital_Name << endl;
        cout << "Location : " << Hospital_Location << endl;
        cout << endl;
        Doctor_List.Print_Doctor_Stack();
    }

    void Create_And_Add_Nurse()
    {
        Nurse_List.Create_And_Add_Nurse();
    }

    void Print_Nurse_List_Sorted_By_Name()
    {
        Nurse_List.Print_The_Nurse_List();
    }

    void Edit_Nurse_Information()
    {
        Nurse_List.Edit_The_Nurse_Information();
    }

    void Create_And_Add_Patient()
    {
        Patient_List.Create_And_Add_Patient();
    }

    void Print_Patient_List_Sorted_By_Name()
    {
        Patient_List.Print_The_Patient_List();
    }

    void Edit_Patient_Information()
    {
        Patient_List.Edit_Patient_Information();
    }

    void Create_And_Add_Doctor()
    {
        Doctor_List.Create_And_Add_Doctor();
    }

    void Print_Doctor_List_Sorted_By_Name()
    {
        Doctor_List.Print_The_Doctor_List();
    }

    void Edit_Doctor_Information()
    {
        Doctor_List.Edit_Doctor_Information();
    }

    void Delete_Patient()
    {
        Patient_List.Delete_Patient();
    }

    void Delete_Doctor()
    {
        Doctor_List.Delete_Doctor();
    }

    void Delete_Nurse()
    {
        Nurse_List.Delete_Nurse();
    }

    void Enqueue_Emergency_Patient()
    {
        string name;
        int age;
        cout << "Enter Emergency Patient Name: ";
        cin >> name;
        cout << "Enter Emergency Patient Age: ";
        cin >> age;
        Emergency_Patient_Queue.Enqueue(name, age);
    }

    void Dequeue_Emergency_Patient()
    {
        Emergency_Patient_Queue.Dequeue();
    }

    void Print_Emergency_Patient_Queue()
    {
        Emergency_Patient_Queue.Display();
    }

    void Create_And_Add_Visitor()
    {
        string name;
        cout << "Enter Visitor Name: ";

        cin >> name;
        Visitor_List.Insert(name);
    }

    void Print_Visitor_List()
    {
        Visitor_List.PrintTree();
    }

    void Search_Visitor()
    {
        string name;

        cout << "Enter Visitor Name to Search: ";
        cin >> name;

        bool Found = Visitor_List.Retrieve(name);
        if (Found)
        {
            cout << "Visitor Found: " << name << endl;
        }
        else
        {
            cout << "Visitor Not Found" << endl;
        }
    }
};







bool Binary_Search(int arr[], int Size, int Key)
{
    int Start = 0, End = Size - 1;
    while (Start <= End)
    {
        int Mid = Start + (End - Start) / 2;
        if (arr[Mid] == Key)
        {
            return true;
        }
        else if (arr[Mid] < Key)
        {
            Start = Mid + 1;
        }
        else
        {
            End = Mid - 1;
        }
    }
    return false;
}
int main()
{
    Hospital hospital;
    int Choice;
    bool Hospital_Info_Entered = false;

    int arr[21] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };

    do
    {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Enter Hospital Information" << endl;
        cout << "2. Add Nurse" << endl;
        cout << "3. Print Nurse List" << endl;
        cout << "4. Edit Nurse Information" << endl;
        cout << "5. Add Patient" << endl;
        cout << "6. Print Patient List" << endl;
        cout << "7. Edit Patient Information" << endl;
        cout << "8. Add Doctor" << endl;
        cout << "9. Print Doctor List" << endl;
        cout << "10. Edit Doctor Information" << endl;
        cout << "11. Delete Patient" << endl;
        cout << "12. Delete Doctor" << endl;
        cout << "13. Delete Nurse" << endl;
        cout << "14. Enqueue Emergency Patient" << endl;
        cout << "15. Dequeue Emergency Patient" << endl;
        cout << "16. Print Emergency Patient Queue" << endl;
        cout << "17. Add Visitor" << endl;
        cout << "18. Print Visitor List" << endl;
        cout << "19. Search Visitor" << endl;
        cout << "20. Exit" << endl;
        cout << "\nEnter Your Choice : ";
        cin >> Choice;

        if (Binary_Search(arr, 21, Choice))
        {
            switch (Choice)
            {
            case 1:
                hospital.Input_Hospital_Information();
                Hospital_Info_Entered = true;
                break;
            case 2:
                if (!Hospital_Info_Entered)
                {
                    cout << "Please Enter Hospital Information First." << endl;
                    break;
                }
                hospital.Create_And_Add_Nurse();
                break;
            case 3:
                hospital.Print_Nurse_List_Sorted_By_Name();
                break;
            case 4:
                hospital.Edit_Nurse_Information();
                break;
            case 5:
                if (!Hospital_Info_Entered)
                {
                    cout << "Please Enter Hospital Information First." << endl;
                    break;
                }
                hospital.Create_And_Add_Patient();
                break;
            case 6:
                hospital.Print_Patient_List_Sorted_By_Name();
                break;
            case 7:
                hospital.Edit_Patient_Information();
                break;
            case 8:
                if (!Hospital_Info_Entered)
                {
                    cout << "Please Enter Hospital Information First." << endl;
                    break;
                }
                hospital.Create_And_Add_Doctor();
                break;
            case 9:
                hospital.Print_Doctor_List_Sorted_By_Name();
                break;
            case 10:
                hospital.Edit_Doctor_Information();
                break;
            case 11:
                hospital.Delete_Patient();
                break;
            case 12:
                hospital.Delete_Doctor();
                break;
            case 13:
                hospital.Delete_Nurse();
                break;
            case 14:
                hospital.Enqueue_Emergency_Patient();
                break;
            case 15:
                hospital.Dequeue_Emergency_Patient();
                break;
            case 16:
                hospital.Print_Emergency_Patient_Queue();
                break;
            case 17:
                hospital.Create_And_Add_Visitor();
                break;
            case 18:
                hospital.Print_Visitor_List();
                break;
            case 19:
                hospital.Search_Visitor();
                break;
            case 20:
                exit(0);
                break;
            default:
                cout << "Invalid Choice." << endl;
            }
        }
        else
        {
            cout << "Invalid Choice." << endl;
        }
    } while (true);

    return 0;
}