# Patients Directory

The `Patients` directory is an essential part of the Hospital Management System (HMS). This directory stores the medical records and profiles of all the patients registered in the system.

## Directory Structure

Each patient has a unique file named after their full name (concatenation of first name and last name). For example, if a patient's name is John Doe, their file will be `JohnDoe.txt`.

## File Contents

Each patient's file contains detailed medical information, including personal details, medical observations, and prescribed medications. Below is a sample structure of what each file contains:

### Example Patient File (`JohnDoe.txt`)

```
Name :  John Doe
Age :   45
Pulse Rate :   72
Weight :  80
Blood Group :  O+

Observation by: Dr. Smith

Date : 08/06/2024

Patient Observation :
- The patient is experiencing mild chest pain.
- Blood pressure is slightly elevated.

Prescribed Medicines :
- Aspirin 75mg, once daily
- Atorvastatin 10mg, once daily

=====================================================
```

## Functions

### Creating a Patient Profile

When a new patient is registered, a new file is created in this directory with their medical information.

### Updating Medical Records

Doctors can update the medical records by adding their observations and prescribed medications. These updates are appended to the respective patient's file.

### Reading Patient Files

Both patients and doctors can access the patient's medical records. Patients can view their medical history, and doctors can read and update the medical records as needed.

## Usage

### Adding a New Patient

To add a new patient, the management team uses the HMS interface to input the patient's details. The system then creates a new file in the `Patients` directory.

### Updating Patient Records

Doctors can update patient records through the HMS interface by selecting the patient and entering their observations and prescribed medications.

### Viewing Patient Records

Patients and doctors can view the patient records by navigating to the respective file in the `Patients` directory through the HMS interface.

## Important Notes

- Ensure that the patient files are kept confidential and secure.
- Regularly back up the `Patients` directory to prevent data loss.
- Follow the naming convention strictly to avoid confusion and ensure easy retrieval of patient records.

## Contact

For any issues or questions regarding the `Patients` directory, please contact the system administrator or the IT support team.

---

**Disclaimer:** This directory and its contents are part of the Hospital Management System and should be handled with care to ensure patient confidentiality and data integrity.
```
