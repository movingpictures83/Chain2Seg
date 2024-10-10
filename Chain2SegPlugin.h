#ifndef CHAIN2SEGPLUGIN_H
#define CHAIN2SEGPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class Chain2SegPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Chain2Seg";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
