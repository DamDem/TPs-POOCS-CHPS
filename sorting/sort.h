#ifndef SORT_H 
#define SORT_H

#include <random>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iostream>

class sort
{
private:
    std::vector<int> vec;
    int size;    

    int rng(int val_max, int val_min); //random number generator

    void quick_sort(std::vector<int> vec, int first, int last); //tri rapide
    int partition(std::vector <int> vec, int first, int last); //partition pour quick_sort

public:
    
    sort(int SIZE, int val_min, int val_max); //initialise un vecteur de taille donnée
    sort(); //init vec taille 10

    void bubble_sort(); //tri à bulle
    void bubble_sort_optimized(); //tri à bulle opti
    void quick_sort(); //interface utilisateur tri rapide
    void stdlib_sort(); //interface utilisateur tri de la bibliothèque std

    bool test_sorted(); //test si le vecteur est trié

    void print(); //affichage

    ~sort(); //destructeur
};

#endif