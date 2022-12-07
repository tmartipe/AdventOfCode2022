#pragma once
#include <fstream>
#include <list>
#include <map>
#include <string>
using namespace std;

class Day1
{
public:
    list<int> static getElfCalories()
    {
        fstream input;
        input.open("input.txt", ios::in);
        string line;
        list<int> elfsCalories;
        list<int> auxList;
        while(getline(input, line)){
            if(line == "")
            {
                int total = 0;
                for(int calorie : auxList)
                {
                    total+= calorie;
                }
                auxList.clear();
                elfsCalories.push_front(total);
                continue;
            }
            auxList.push_front(stoi(line));
        }
        input.close();
        elfsCalories.sort();
        elfsCalories.reverse();
        return elfsCalories;
    }

    int static getElfWithMostCalories()
    {
        return getElfCalories().front();
    }

    int static getTopThreeTotalCalories()
    {
        int totalCal = 0;
        list<int> elfscalories = getElfCalories();
        for(int i = 0; i < 3; i++)
        {
            totalCal += elfscalories.front();
            elfscalories.pop_front();
        }
        return totalCal;
    }
};
