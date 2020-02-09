#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>
#include <iostream>
#include <fstream>
class Auteur
{
public:
    Auteur() = default;
    Auteur(const std::string& nom, unsigned int anneeDeNaissance);

    bool operator==(const std::string& nom) const;
    const std::string& getNom() const;
    unsigned int getAnneeDeNaissance() const;
    unsigned int getNbFilms() const;

    void setNbFilms(unsigned int nbFilms);

private:
    std::string nom_;
    unsigned int anneeDeNaissance_;
    unsigned int nbFilms_;
};
std::ostream& operator<<(std::ostream& outputStream, const Auteur& auteur);
bool operator==(const std::string& nom, const Auteur& auteur);

#endif // AUTEUR_H