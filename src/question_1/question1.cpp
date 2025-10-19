#include "question1.h"

std::string transcribe_dna_into_rna(const std::string& dna) {
    std::string rna = dna;
    for (char& c : rna) {
        if (c == 'T') c = 'U';
    }
    return rna;
}