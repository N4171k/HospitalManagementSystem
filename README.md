# Hospital Management System (HMS)

This is a C++ program designed to manage a hospital system, including functionalities for patients, doctors, and management staff. The system allows different user types to log in and perform various actions based on their roles.

## Features

### Patient
- **Check Doctor Availability**: Patients can check the availability of doctors.
- **View Medical Records**: Patients can view their own medical records.

### Doctor
- **Patient Details**: Doctors can view and update patient details and observations.
- **Set Availability**: Doctors can set their availability for the week.

### Management
- **Add Doctor**: Management can add new doctors to the system.
- **Add Patient**: Management can add new patients to the system.
- **Add Management Staff**: Management can add new management staff to the system.

## File Structure

- **credentials.txt**: Stores the credentials of all users (patients, doctors, and management).
- **ActivePatients.txt**: Keeps track of active patients.
- **Patients/**: Directory where patient files are stored.
- **Doctors/**: Directory where doctor files are stored.

## Compilation and Execution

1. **Compile the program:**
   ```sh
   g++ -o hms hms.cpp
   ```

2. **Run the program:**
   ```sh
   ./hms
   ```

## How to Use

### User Login

1. Enter your username and password to log in.
   (You could M.test as username and test as a password to make your first login as it is stored in the credentials.txt)

### Patient Actions

1. **Check Doctor Availability**:
    - Confirm your full name.
    - View the availability of doctors.
    
2. **View Medical Records**:
    - Confirm your full name.
    - View your medical records.

### Doctor Actions

1. **Patient Details**:
    - Enter your full name and the patient's name.
    - View and update the patient's details and observations.
    
2. **Set Availability**:
    - Confirm your full name.
    - Set your availability for the week.

### Management Actions

1. **Add Doctor**:
    - Enter the doctor's details.
    - Create a username and password for the doctor.
    
2. **Add Patient**:
    - Enter the patient's details.
    - Create a username and password for the patient.
    - Add the patient's profile.
    
3. **Add Management Staff**:
    - Enter the management staff's details.
    - Create a username and password for the staff.

## Example

### Adding a New Patient

1. Log in as a management user.
2. Choose the option to add a new patient.
3. Enter the patient's first name, last name, age, phone number, weight, pulse rate, and blood group.
4. A username and password will be generated for the patient.
5. The patient's profile will be created and saved.

### Setting Doctor Availability

1. Log in as a doctor.
2. Choose the option to set availability.
3. Confirm your full name.
4. Enter your availability for each day of the week.

## Contributions

Contributions are welcome! Please fork this repository and submit pull requests.

---

Thank you for using the Hospital Management System!
