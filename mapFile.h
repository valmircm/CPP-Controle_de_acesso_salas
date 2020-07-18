#ifndef MAPFILE_H
#define MAPFILE_H
 
#include <string>
#include <map>
#include <fstream>
#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
class MapFile {
	MapFile() {}
public:
	MapFile(string filename) {
        string usuario,sala;
		ifstream file(filename.c_str());
        int delimiter;
		//string line;
		//char line_c[256];
        cout << "inicio\n";

        for (std::string line; std::getline(file, line); ){
            cout << "linha " << line << "\n";
			delimiter = line.find(':');
			usuario = line.substr(0,delimiter).c_str();
            delimiter++;
			sala = line.substr(delimiter).c_str();
			_pt.insert(make_pair(usuario,sala));
        }
 
	}
 
	virtual ~MapFile() {}
 
	void print_lista_map()
	{
		cout << "Lista :" << endl;
		map<string, string>::iterator mit = _pt.begin();
		for(; mit != _pt.end(); ++mit)
			cout << mit->first << " - " << mit->second << endl;
	}
 
private:
	map<string, string> _pt;
};
 
#endif