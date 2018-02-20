/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pet.h
 * Author: gpoliakov
 *
 * Created on February 18, 2018, 11:19 AM
 * 
 * Pet class containing variables and functions
 */

#include<string>
using namespace std;

#ifndef PET_H
#define PET_H

class Pet{
protected:
    string m_Name;
    string m_Type;
    unsigned int m_Weight;
    double m_Price;
    
public:
    //Returns all elements
    virtual string GetName(){
        return m_Name;
    }
    virtual string GetType(){
        return m_Type;
    }
    virtual unsigned int GetWeight(){
        return m_Weight;
    }
    virtual double GetPrice(){
        return m_Price;
    }
    //Constructor
    Pet(string name, string type, unsigned int weight, double price){
        m_Name = name;
        m_Type = type;
        m_Weight = weight;
        m_Price = price;
    }
    Pet(){}
};



#endif /* PET_H */

