#include "Quete.h"

string Quete::to_string()
{
    string info;
    info.append("Nom : " + nom + "\n");
    info.append("recompense : " + recompense + "\n");
    info.append( nivMin + "\n");
    info.append(duree + "\n");
   

    return info;
}
