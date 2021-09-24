#include <iostream>
#include <fstream>
#include <json/json.h>

using namespace std;

class  topologies {

public:

    string file_components, topology, netlist_node;
    int read_topology_json(string);
    int write_topology();
    int show_topologies();
    int delete_topology(string);
    int show_devices(string);
    int show_devices_netlist(string, string);

    



};


int topologies::read_topology_json(string file_dir)
{ 

    ifstream json_file;
  
    topologies obj;
    //json_file.read((char*)&obj.file_components, sizeof(obj.file_components));

    Json::Value root;
    ifstream config_doc(file_dir, std::ifstream::binary);
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
    object.read_topology_json("F:\Python\Master-Micro Task 2- Topology API Store, Read & Query\Topology API\topology.json");
    return 0;
}

