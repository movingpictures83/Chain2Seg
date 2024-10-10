#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "Chain2SegPlugin.h"

void Chain2SegPlugin::input(std::string file) {
 inputfile = file;
}

void Chain2SegPlugin::run() {}

void Chain2SegPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_chain-to-segid";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<Chain2SegPlugin> Chain2SegPluginProxy = PluginProxy<Chain2SegPlugin>("Chain2Seg", PluginManager::getInstance());
