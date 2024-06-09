
#include <bits/stdc++.h>
using namespace std;



bool containsP(const string& username) {
    for (char c : username) {
        if (c == 'P' || c == 'p') {
            return true;
        }
    }
    return false;
}

bool containsD(const string& username) {
    for (char c : username) {
        if (c == 'D' || c == 'd') {
            return true;
        }
    }
    return false;
}

bool containsM(const string& username) {
    for (char c : username) {
        if (c == 'M' || c == 'm') {
            return true;
        }
    }
    return false;
}



class Management {
private:
    string fname;
    string lname;
    int age;
    string pass;
    string usrname;
    string phn;
    int weight;
    int pulse;
    string bg;
    string spec;

public:
    void pinput() {
        cout << "First Name : ";
        cin >> fname;
        cout << "Last Name : ";
        cin >> lname;
        cout << "Age : ";
        cin >> age;
        cout << "Phone Number : ";
        cin >> phn;
        cout<< "Wieght : ";
        cin>>weight;
        cout<<"Pulse : ";
        cin>>pulse;
        cout<<"Blood Group : ";
        cin>>bg;

        ofstream activePatients("ActivePatients.txt");
        activePatients<<fname<<" "<<lname<<endl;
    }

    void dinput() {
        cout << "First Name : ";
        cin >> fname;
        cout << "Last Name : ";
        cin >> lname;

        cout << "Phone Number : ";
        cin >> phn;

        cout<<"Speciality : ";
        cin>>spec;
    }

    void minput() {
        cout << "First Name : ";
        cin >> fname;
        cout << "Last Name : ";
        cin >> lname;

        cout << "Phone Number : ";
        cin >> phn;
    }

    string filename;
    void Ppassmaker(ofstream& outputFile) {
        usrname = "P." + fname;
        pass = fname + "@" + phn;
        outputFile << usrname << " " << pass << endl; // Append a newline

        filename=fname+lname;
        ifstream PATIENTfile("./Patients/"+filename+".txt", ios::app);

    }

    void Dpassmaker(ofstream& outputFile) {
        usrname = "D." + fname;
        pass = fname + "@" + phn;
        outputFile << usrname << " " << pass << endl; // Append a newline
        filename=fname+lname;
        ifstream docprofile("./Doctors/"+filename+".txt", ios::app);
    }

    void mpassmaker(ofstream& outputFile) {
        usrname = "M." + fname;
        pass = fname + "@" + phn;
        outputFile << usrname << " " << pass << endl; // Append a newline
        ofstream pfile(usrname+".txt");
    }

    void pprofile(){
        ofstream PATIENTfile("./Patients/"+filename+".txt", ios::app);
        PATIENTfile<<"Name :\t"<<fname<<" "<<lname<<endl;
        PATIENTfile<<"Age :\t"<<age<<endl;
        PATIENTfile<<"Pulse Rate :\t"<<pulse<<endl;
        PATIENTfile<<"Wieght :\t"<<weight<<endl;
        PATIENTfile<<"Blood Group :\t"<<bg<<endl;


    }
};

class Doctor{
    string pname;
public:
    string filename;
    string line;
    string fullname;
    void nameinput(){

        cout << "Can you please confirm your full name : ";

        cin >> fullname;
        cout<<"Enter Name of Patient : ";
        cin>>pname;
        filename="./Patients/"+pname+".txt";

    }


    void pfilewrite() {
        ofstream writePATIENTfile(filename, ios::app);

        string temp = ".";

        writePATIENTfile<<"\n\nObservation by: Dr. "<<fullname<<"\n\n";

        time_t now = time(0);
        // convert now to tm struct for UTC
        tm *gmtm = gmtime(&now);

        int day = gmtm->tm_mday;
        int month = gmtm->tm_mon + 1; // tm_mon ranges from 0 to 11, so add 1
        int year = gmtm->tm_year+1900;

        writePATIENTfile<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
        cout <<"Enter PATIENT observation (enter '.' to stop): \n";

        writePATIENTfile<<"\n\nPatient Observation :\n";

        while (true) {
            cout << ">>";
            getline(cin, line); // Read input from user

            if (line == temp) {
                break; // Exit loop if the input is "."
            }

            writePATIENTfile << line << endl; // Write the input line to the file
        }

        cout<<"------------------------\nEnter PATIENT Medications :\n";

        writePATIENTfile<<"\n\nPrescribed Medicines : \n";

        while (true) {
            cout << ">>";
            getline(cin, line); // Read input from user

            if (line == temp) {
                break; // Exit loop if the input is "."
            }

            writePATIENTfile << line << endl;

        }
        writePATIENTfile<<"====================================================="<<endl;

        writePATIENTfile.close();
    }

    void pfileread() {
        fstream readpatientfile(filename, ios::in);

        if (!readpatientfile) {
            cerr << "File could not be opened." << endl;
            return;
        }


        while (getline(readpatientfile, line)) {
            cout << line << endl;
        }
        readpatientfile.close();
    }


    void setavailibilty(){
        string fullname;
        cout << "Can you please confirm your full name : ";

        cin >> fullname;
        string filename=fullname+".txt";
        fstream writefile("./Doctors/"+filename, ios::out);
        time_t now = time(0);
        // convert now to tm struct for UTC
        tm *gmtm = gmtime(&now);

        int day = gmtm->tm_mday;
        int month = gmtm->tm_mon + 1; // tm_mon ranges from 0 to 11, so add 1

        int week;
        bool avl;
        string avltime,availebilty;

        cout<<"Enter 1 if available or 0 to show Unavailability\n\n";
        for(week=0;week<=7;week++) {
            cout << day <<"/"<<month<<"\t\t";
            writefile<<"\n"<<day <<"/"<<month<<"\t";
            cin>>avl;
            if(avl){
                availebilty="AVAILABLE";
            }else{
                availebilty="UNAVAILABLE";
            }

            writefile<<"\t"<<availebilty<<"\t";
            if(avl){
                cout<<"Available Timing (in format xx-yy) :\t";
                cin>>avltime;
                writefile<<"availabe from "<<avltime<<endl;
            }
            day++;

        }

    }


};

class Patient{
public:
    void fileopener(string fullname){
        string line;
        string filename="./Patients/"+fullname+".txt";

        fstream readpatientfile(filename, ios::in);
        if (!readpatientfile) {
            cerr << "File could not be opened." << endl;
            return;
        }

        cout << "Reading from file: " << filename << endl;
        while (getline(readpatientfile, line)) {
            cout << line << endl;
        }

        readpatientfile.close();
    }

    void DocAvailibilty() {
        string dname;
        string line;
        cout<<"Enter Doctor's name to check availabilty : ";
        cin>>dname;
        string filename="./Doctors/"+dname+".txt";
        fstream readpatientfile(filename, ios::in);

        if (!readpatientfile) {
            cerr << "File could not be opened." << endl;
            return;
        }


        while (getline(readpatientfile, line)) {
            cout << line << endl;
        }
        readpatientfile.close();
    }


};

int main() {
    int loop = 1;
    while (loop != 0) {
        int tPATIENT;
        ifstream inputFile("credentials.txt");
        ofstream outputFile("credentials.txt", ios::app);  // Open in append mode

        if (!inputFile.is_open() || !outputFile.is_open()) {
            cerr << "Failed to open the file." << endl;
            return 1;
        }

        string username, password;

        cout << "===============USER LOGIN===============" << endl;

        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        bool found = false;
        string line;
        while (getline(inputFile, line)) {
            istringstream iss(line);
            string fileUsername, filePassword;
            if (iss >> fileUsername >> filePassword) {
                if (fileUsername == username && filePassword == password) {
                    found = true;
                    break;
                }
            } else {
                cerr << "Invalid line: " << line << endl;
            }
        }

        if (found) {
            cout << "Login successful." << endl;
            int loginstatus=1;
            while (loginstatus) {
                if (containsP(username)) {

                    Patient p1;

                    int pchoice;
                    cout << "Hello! " << username << endl;
                    cout<<"Choose from the given options :\n1.\tCheck Doctor Availability\n2.\tView Medical Records"<<endl;
                    cin>>pchoice;
                    string fullname;
                    switch (pchoice) {
                        case 1:
                            cout << "Can you please confirm your full name : ";

                            cin >> fullname;
                            p1.fileopener(fullname);
                            break;
                        case 2:
                            p1.DocAvailibilty();
                            break;
                        default:
                            break;
                    }


                }
                else if (containsD(username)) {
                    Doctor d1;
                    cout << "Hello Doctor\n\n";

                    int dchoice;
                    cout << "1 for PATIENT details\n";
                    cout << "2 for setting availbilty\n";
                    cin >> dchoice;

                    string pname;
                    ofstream pfile(pname + ".txt");
                    switch (dchoice) {
                        case 1:

                            d1.nameinput();
                            d1.pfileread();
                            d1.pfilewrite();
                            break;
                        case 2:
                            cout << "Hello! " << username << endl;
                            d1.setavailibilty();
                            break;
                        default:
                            break;
                    }


                } else if (containsM(username)) {
                    cout << "Welcome to management portal" << endl;
                    Management m1;
                    int mchoice1;

                    cout << "Choose from the list bellow :\n1.\tDoctor\n2.\tPATIENT\n3.\tManegement\n";
                    cin >> mchoice1;

                    switch (mchoice1) {
                        case 1:
                            m1.dinput();
                            m1.Dpassmaker(outputFile);
                            cout << "Entry created successfully !\n";
                            break;
                        case 2:
                            m1.pinput();
                            m1.Ppassmaker(outputFile);
                            m1.pprofile();
                            cout << "Entry created successfully !\n";

                            tPATIENT++;
                            break;
                        case 3:
                            m1.minput();
                            m1.mpassmaker(outputFile);
                            cout << "Entry Created successfully !\n";
                            break;
                        default:
                            break;


                    }

                } else {
                    cout << "INVALID CREDENTIALS";
                }
                cout<<"Do you want to continue ?\n1.\tContinue\n2.\tLog Out\n"<<endl;
                int logout;
                cin>>logout;
                switch (logout) {
                    case 1:
                        system("cls");
                        break;
                    case 2:
                        loop--;
                        loginstatus--;
                        system("cls");
                        break;
                    default:
                        break;
                }
            }

            inputFile.close();
            outputFile.close(); // Close the output file

        }

    }
    cout<<"THANK YOU FOR USING HMS";
    return 0;

}

