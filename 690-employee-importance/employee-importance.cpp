/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/
class Solution {
public:
     int dfs(int id, unordered_map<int, Employee*>& empMap) {
        Employee* emp=empMap[id];
        int imp=emp->importance; 
        for (int subempId:emp->subordinates){ 
            imp+=dfs(subempId,empMap);  
        }
        return imp;
    }
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> empMap; 
        for(Employee* emp:employees){
            empMap[emp->id] = emp;
        }
        return dfs(id,empMap);
    }
};