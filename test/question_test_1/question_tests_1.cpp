#include <iostream>
#include <cassert>
#include "../../src/question_1/question1.h"

int main() {
    assert(transcribe_dna_into_rna("GATGGAACCTGACTGACTGAAATT") == "GAUGGAACCUGACUGACUGAAAUU");
    assert(transcribe_dna_into_rna("TTTT") == "UUUU");
    assert(transcribe_dna_into_rna("ACG") == "ACG");
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}