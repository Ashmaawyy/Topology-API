// Topology API.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <json/json.h>
using namespace std;

class  topologies {

public:

    string file_components, topology, netlist_node;
    int read_topology();
    int write_topology();
    int show_topologies();
    int delete_topology(string);
    int show_devices(string);
    int show_devices_netlist(string, string);

    



};


int topologies::read_topology()
{ 
    ifstream json_file;
    json_file.open("F:\Python\Master-Micro Task 2- Topology API Store, Read & Query\Topology API\some_text.txt", ios::in);

    topologies obj;
    //json_file.read((char*)&obj.file_components, sizeof(obj.file_components));

    Json::Value root;
    ifstream config_doc("topologies.json", std::ifstream::binary);
    config_doc >> root;
    //cout << obj.file_components;
    cout << root;




    return 0;
}

int topologies::write_topology()
{
    return 0;
}

int topologies::show_topologies()
{
    return 0;
}

int topologies::delete_topology(string)
{
    return 0;
}

int topologies::show_devices(string)
{
    return 0;
}

int topologies::show_devices_netlist(string, string)
{
    return 0;
}



int main()
{
    topologies object;
    object.read_topology();
    return 0;
}

