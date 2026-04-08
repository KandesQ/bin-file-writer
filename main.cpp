#include <iostream>

#include "src/file/BinaryFileWriter.h"
#include "src/file/TextFileReader.h"
#include "src/ListNode.h"

const std::string IN_FILENAME = "inlet.in";
const std::string OUT_FILENAME = "outlet.out";

int main() {
    TextFileReader reader(IN_FILENAME);
    List::ListNode* head{reader.read_list()};

    // Test: shows list
    List::print_list(head);

    BinaryFileWriter writer(OUT_FILENAME);
    writer.write_list(head, reader.get_rand_index_match());

    List::clear_list(head);
    return 0;
}
