//
// Created by Fedor Kapranov on 08.04.2026.
//

#ifndef BINARY_FILE_WRITER_BINARYFILEWRITER_H
#define BINARY_FILE_WRITER_BINARYFILEWRITER_H

#include <string>

#include "../ListNode.h"

class BinaryFileWriter {
    std::string filename;
public:
    explicit BinaryFileWriter(std::string filename);

    void write_list(const ListNode* head, const std::unordered_map<uint32_t, int>& rand_index_match) const;

    void set_filename(std::string new_filename);

    const std::string& get_filename() const;
};



#endif //BINARY_FILE_WRITER_BINARYFILEWRITER_H
