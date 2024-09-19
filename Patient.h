#pragma once
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <stdint.h>
// #include <>

struct Date
{
    std::byte day;
    std::byte month;
    uint16_t year;
    uint32_t datecode;
};

struct Diag
{
    std::string desis;
    std::string pills;
};





class Patient
{
private:
    std::string _name;
    std::string _patronomic;
    std::string _surname;
    Date _bornDate;
    // UUID _patientID;
    Diag _diag;
    std::string _problem;
    void ParseFIO(std::string FIO);

public:
    Patient(std::string name, std::string patronomic, std::string surname, std::string problem, Date bornDate);
    Patient(std::string FIO, std::string problem, Date bornDate);
    void PatientInfo();
};



