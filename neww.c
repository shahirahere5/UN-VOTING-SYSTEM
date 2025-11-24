#include <stdio.h>
int main(){
	int votes[3] = {0, 0, 0};  
    int totalCountries = 193;   
    char countries[193][40] = {
        "Afghanistan", "Albania", "Algeria", "Andorra", "Angola", "Antigua and Barbuda", "Argentina", 
        "Armenia", "Australia", "Austria", "Azerbaijan", "Bahamas", "Bahrain", "Bangladesh", "Barbados", 
        "Belarus", "Belgium", "Belize", "Benin", "Bhutan", "Bolivia", "Bosnia and Herzegovina", "Botswana", 
        "Brazil", "Brunei", "Bulgaria", "Burkina Faso", "Burundi", "Cabo Verde", "Cambodia", "Cameroon", 
        "Canada", "Central African Republic", "Chad", "Chile", "China", "Colombia", "Comoros", 
        "Congo", "Costa Rica", "Croatia", "Cuba", "Cyprus", "Czech Republic", 
        "North Korea", "Democratic Republic of the Congo", 
        "Denmark", "Djibouti", "Dominica", "Dominican Republic", "Ecuador", "Egypt", "El Salvador", 
        "Equatorial Guinea", "Eritrea", "Estonia", "Eswatini", "Ethiopia", 
        "Fiji", "Finland", "France", "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Greece", 
        "Grenada", "Guatemala", "Guinea", "Guinea-Bissau", "Guyana", "Haiti", "Honduras", "Hungary", 
        "Iceland", "India", "Indonesia", "Iran", "Iraq", "Ireland", "Israel", 
        "Italy", "Jamaica", "Japan", "Jordan", "Kazakhstan", "Kenya", "Kiribati", "Kuwait", 
        "Kyrgyzstan", "Laos", "Latvia", "Lebanon", "Lesotho", 
        "Liberia", "Libya", "Liechtenstein", "Lithuania", "Luxembourg", "Madagascar", "Malawi", 
        "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Mauritania", "Mauritius", 
        "Mexico", "Micronesia", "Moldova", "Monaco", "Mongolia", 
        "Montenegro", "Morocco", "Mozambique", "Myanmar", "Namibia", "Nauru", "Nepal", "Netherlands", 
        "New Zealand", "Nicaragua", "Niger", "Nigeria", "North Macedonia", "Norway", "Oman", 
        "Pakistan", "Palau", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", 
        "Poland", "Portugal", "Qatar", "Romania", "Russian Federation", "Rwanda", "Saint Kitts and Nevis", 
        "Saint Lucia", "Saint Vincent and the Grenadines", "Samoa", "San Marino", "Sao Tome and Principe", 
        "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone", "Singapore", "Slovakia", 
        "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Korea", "South Sudan", 
        "Spain", "Sri Lanka", "Sudan", "Suriname", "Sweden", "Switzerland", "Syrian Arab Republic", 
        "Tajikistan", "Tanzania", "Thailand", "Timor-Leste", "Togo", "Tonga", "Trinidad and Tobago", 
        "Tunisia", "Turkey", "Turkmenistan", "Tuvalu", "Uganda", "Ukraine", "United Arab Emirates", 
        "United Kingdom", "United States", "Uruguay", "Uzbekistan", "Vanuatu", "Vatican City", 
        "Venezuela", "Vietnam", "Yemen", "Zambia", "Zimbabwe"
    };    
    char vote[10];             
    int i;
	char countryName;
	
	printf("UN VOTING SYSTEM!");
	
	printf("enter country: ");
	scanf("%d",&countryName);
	
	int found =0;
	for(i=0;i<=193;i++){
		if (countries[i] == countryName){
			 found = 1;
		} 	
	}
	
	if(found ==0){
		printf("invalid country name!");
		break;
	}
	
	for (i = 0; i < totalCountries; i++) {
        printf("Country: %s\n", countries[i]);
        printf("Vote (Y for Yes, N for No, A for Abstain): ");
        scanf(" %c", &vote);  // Read user's vote

        // Count the votes based on user input
        if (vote == 'Y' || vote == 'y') {
            votes[0]++;  // Increment Yes votes
        } else if (vote == 'N' || vote == 'n') {
            votes[1]++;  // Increment No votes
        } else if (vote == 'A' || vote == 'a') {
            votes[2]++;  // Increment Abstain votes
        } else {
            printf("Invalid vote! Please enter Y, N, or A.\n");
            i--;  // Decrement i to repeat the vote for the same country
        }
    }

	
}		

	