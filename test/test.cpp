#include <iostream>
#include "vdfparser.hpp"

int main()
{
    VDFTree* tree = NULL;
    if (not VDFTreeParser::OpenVDF("test.res", &tree)) {
        std::cerr << "Failed to open file " << std::endl;
        return 1;
    }

    VDFNode* root = tree->rootNode;
    std::cout << "Root node: " << root->key << std::endl;

    std::cout << "Child nodes: " << std::endl;
    for (VDFNode* child_node = root->childNode;
            child_node != NULL;
            child_node = child_node->nextNode) {
        std::cout << "  " << child_node->key << std::endl;
    }

    delete tree;
}
