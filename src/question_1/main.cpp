
#include <iostream>
#include "question1.h"

int main() {
    std::string dna = "GATGGAACCTGACTGACTGAAATT";
    std::string rna = transcribe_dna_into_rna(dna);
    std::cout << rna << std::endl; // Output: GAUGGAACCUGACUGACUGAAAUU
    return 0;
}