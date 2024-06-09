# Doctors Directory

The `Doctors` directory is an essential part of the Hospital Management System (HMS). This directory stores the profiles and availability information of all the doctors registered in the system.

## Directory Structure

Each doctor has a unique file named after their full name (concatenation of first name and last name). For example, if a doctor's name is Jane Smith, their file will be `JaneSmith.txt`.

## File Contents

Each doctor's file contains detailed professional information, including personal details, specialties, and availability schedules. Below is a sample structure of what each file contains:

### Example Doctor File (`JaneSmith.txt`)

```
Name :  Dr. Jane Smith
Specialty :  Cardiology
Phone Number :  123-456-7890

Availability:
08/06/2024  AVAILABLE  available from 09:00-17:00
08/07/2024  UNAVAILABLE
08/08/2024  AVAILABLE  available from 09:00-17:00
...

=====================================================
```

## Functions

### Creating a Doctor Profile

When a new doctor is registered, a new file is created in this directory with their professional information.

### Updating Availability

Doctors can update their availability schedules. These updates are appended to the respective doctor's file.

### Reading Doctor Files

Both patients and management can access the doctor's profile and availability information. Patients can view the availability to schedule appointments, and the management can oversee and manage doctor schedules.

## Usage

### Adding a New Doctor

To add a new doctor, the management team uses the HMS interface to input the doctor's details. The system then creates a new file in the `Doctors` directory.

### Updating Doctor Availability

Doctors can update their availability through the HMS interface by entering their available or unavailable times.

### Viewing Doctor Profiles

Patients and management can view the doctor profiles by navigating to the respective file in the `Doctors` directory through the HMS interface.

## Important Notes

- Ensure that the doctor files are kept up to date and accurate.
- Regularly back up the `Doctors` directory to prevent data loss.
- Follow the naming convention strictly to avoid confusion and ensure easy retrieval of doctor profiles.

## Contact

For any issues or questions regarding the `Doctors` directory, please contact the system administrator or the IT support team.

---

**Disclaimer:** This directory and its contents are part of the Hospital Management System and should be handled with care to ensure data accuracy and integrity.
```
