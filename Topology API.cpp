#include <iostream>
#include <fstream>
#include <json/json.h>
#pragma warning(disable : 4996).

using namespace std;
using namespace Json;

class  topologies {

public:

    string file_components, topology, netlist_node, topologies_in_memory[];
    int read_topology_json(string);
    int save_topology_json(string);
    int show_topologies();
    int delete_topology(string);
    int show_devices(string);
    int show_devices_netlist(string, string);

    

};


int topologies::read_topology_json(string file_dir)
{ 
    topologies object;
    Json::Value root;
    Json::Reader reader;
    std::ifstream file(file_dir);
    file >> root;

    for (int i = 0; i++ ; root.size())
    {
        root.getMemberNames()[i] = object.topologies_in_memory[i];

    }
    
    //To Check for file formatting errors :)
    if (!reader.parse(file, root)) {
        cout << reader.getFormattedErrorMessages();
        exit(1);
    }

    cout << "Topologies Loaded To Memory :)\nTo access them try: the show_topologies() function :)";
    

    return 0;
}

int topologies::save_topology_json(string file_dir)
{

    

    return 0;
}

int topologies::show_topologies()
{
    topologies object;
    for (int i = 0; i++; object.topologies_in_memory->size())
    {
        cout << "Topology", i, ":", object.topologies_in_memory[i];

    }
    return 0;
}

int topologies::delete_topology(string topology)
{
    topologies object;
    object.topologies_in_memory->clear();
    cout << "Topologies In Memory Cleared Successfuly :)";
    return 0;
}

int topologies::show_devices(string topology)
{
    return 0;
}

int topologies::show_devices_netlist(string device, string netlist)
{
    return 0;
}



int main()
{
    topologies object;
    object.read_topology_json("F:\Python\Master-Micro Task 2- Topology API Store, Read & Query\Topology API\topology.json");
    return 0;
}

