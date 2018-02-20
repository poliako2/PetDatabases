/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dog.h
 * Author: gpoliakov
 *
 * Created on February 18, 2018, 11:19 AM
 */

#ifndef DOG_H
#define DOG_H

#include<string>
#include"Pet.h"

using namespace std;


class Dog: public Pet{
protected:
    string d_Category;  //breed category 
public:
    SetCategory(string c){
        d_Category = c;
    }
    Dog(string name, string type, unsigned int weight, double price, string category){  //Constructor
        m_Name = name;
        m_Price = price;
        m_Type = type;
        m_Weight = weight;
        d_Category = category;
    }
    string GetCategory(){
        return d_Category;  //
    }
    virtual void print(){
        cout << boolalpha;
        cout<<"Name:     "<< GetName() << "   Type:   " << GetType();
        cout<<"   Price:     " << GetPrice() << "   Category   " << GetCategory();
        cout << endl;
    }
};

#endif /* DOG_H */

