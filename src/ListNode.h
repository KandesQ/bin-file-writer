//
// Created by Fedor Kapranov on 06.04.2026.
//

#ifndef BINARY_FILE_WRITER_LISTNODE_H
#define BINARY_FILE_WRITER_LISTNODE_H

#include <string>

namespace List {

    struct ListNode {
        ListNode * prev = nullptr;
        ListNode * next = nullptr;
        ListNode * rand = nullptr;
        std::string data;
    };

    void clear_list(ListNode*& head);

    void print_list(const ListNode* head);

}

#endif //BINARY_FILE_WRITER_LISTNODE_H
