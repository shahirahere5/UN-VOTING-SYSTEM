#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CountryMax 194

typedef struct {
    char name[50];
    char vote[10];
} Country;

const char *countriesList[CountryMax] = {
    "Afghanistan", "Albania", "Algeria", "Andorra", "Angola", "Antigua and Barbuda", "Argentina", 
    "Armenia", "Australia", "Austria", "Azerbaijan", "Bahamas", "Bahrain", "Bangladesh", "Barbados", 
    "Belarus", "Belgium", "Belize", "Benin", "Bhutan", "Bolivia", "Bosnia and Herzegovina", 
    "Botswana", "Brazil", "Brunei", "Bulgaria", "Burkina Faso", "Burundi", "Cabo Verde", "Cambodia", 
    "Cameroon", "Canada", "Central African Republic", "Chad", "Chile", "China", "Colombia", "Comoros", 
    "Congo", "Costa Rica", "Croatia", "Cuba", "Cyprus", "Czech Republic", "Denmark", "Djibouti", 
    "Dominica", "Dominican Republic", "Ecuador", "Egypt", "El Salvador", "Equatorial Guinea", 
    "Eritrea", "Estonia", "Eswatini", "Ethiopia", "Fiji", "Finland", "France", "Gabon", "Gambia", 
    "Georgia", "Germany", "Ghana", "Greece", "Grenada", "Guatemala", "Guinea", "Guinea-Bissau", 
    "Guyana", "Haiti", "Honduras", "Hungary", "Iceland", "India", "Indonesia", "Iran", "Iraq", 
    "Ireland", "Israel", "Italy", "Jamaica", "Japan", "Jordan", "Kazakhstan", "Kenya", "Kiribati", 
    "Korea (North)", "Korea (South)", "Kuwait", "Kyrgyzstan", "Laos", "Latvia", "Lebanon", "Lesotho", 
    "Liberia", "Libya", "Liechtenstein", "Lithuania", "Luxembourg", "Madagascar", "Malawi", "Malaysia", 
    "Maldives", "Mali", "Malta", "Marshall Islands", "Mauritania", "Mauritius", "Mexico", "Micronesia", 
    "Moldova", "Monaco", "Mongolia", "Montenegro", "Morocco", "Mozambique", "Myanmar", "Namibia", 
    "Nauru", "Nepal", "Netherlands", "New Zealand", "Nicaragua", "Niger", "Nigeria", "North Macedonia", 
    "Norway", "Oman", "Pakistan", "Palau", "Panama", "Papua New Guinea", "Paraguay", "Peru", 
    "Philippines", "Poland", "Portugal", "Qatar", "Romania", "Russia", "Rwanda", "Saint Kitts and Nevis", 
    "Saint Lucia", "Saint Vincent and the Grenadines", "Samoa", "San Marino", "Sao Tome and Principe", 
    "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone", "Singapore", "Slovakia", 
    "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Sudan", "Spain", "Sri Lanka", 
    "Sudan", "Suriname", "Sweden", "Switzerland", "Syria", "Tajikistan", "Tanzania", "Thailand", 
    "Timor-Leste", "Togo", "Tonga", "Trinidad and Tobago", "Tunisia", "Turkey", "Turkmenistan", 
    "Tuvalu", "Uganda", "Ukraine", "United Arab Emirates", "United Kingdom", "United States", "Uruguay", 
    "Uzbekistan", "Vanuatu", "Vatican City", "Venezuela", "Vietnam", "Yemen", "Zambia", "Zimbabwe", ""
};

bool valid(const char *vote) {
    return (strcmp(vote, "for") == 0 || strcmp(vote, "against") == 0 || strcmp(vote, "abstain") == 0 || 
            strcmp(vote, "For") == 0 || strcmp(vote, "Against") == 0 || strcmp(vote, "Abstain") == 0);
}

int main() {
    Country countries[CountryMax];
    int For = 0, Against = 0, Abstain = 0;

    printf("UN Voting System\n");
    printf("Enter votes For the Resolution (for, against, abstain)\n");

    for (int i = 0; i < CountryMax-1; i++) {
        strcpy(countries[i].name, countriesList[i]);
        countries[i].name[strlen(countries[i].name)]='\0';
        while (1) {
            //printf("Enter %s vote (for/against/abstain): ", countries[i].name);
            scanf(" %[^\n]", countries[i].vote);

            if (valid(countries[i].vote)) {
                break;
            } else {
                printf("Invalid vote. Please enter 'for', 'against', or 'abstain'.\n");
            }
        }
        if (strcmp(countries[i].vote, "for") == 0 || strcmp(countries[i].vote, "For") == 0) {
            For++;}
        else if (strcmp(countries[i].vote, "against") == 0 || strcmp(countries[i].vote, "Against") == 0) {
            Against++;}
        else if (strcmp(countries[i].vote, "abstain") == 0 || strcmp(countries[i].vote, "Abstain") == 0) {
            Abstain++;}
    }

    printf("\nVoting Results:\n");
    printf("-------------------------------\n");
    for (int i = 0; i < CountryMax-1; i++) {
        printf("%-25s: %s\n", countries[i].name, countries[i].vote);
    }
    printf("\nTotal Votes:\n");
    printf("For: %d\n", For);
    printf("Against: %d\n", Against);
    printf("Abstain: %d\n", Abstain);
    printf("\nResolution Status: ");
    if (For > 97) {
        printf("Passed\n");}
    else {
        printf("Failed\n");}
    return 0;
}


