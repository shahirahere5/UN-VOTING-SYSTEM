# UN-VOTING-SYSTEM

This project is a **UN-style voting simulation system** written in C.  
It allows voting across multiple countries and categories, stores results in a file, analyzes turnout, and provides historical comparison.

---

## 📌 Features

✅ Menu-driven interface  
✅ 20 predefined countries  
✅ Multiple voting categories:
- Climate Change
- Human Rights
- Economic Policy
- Global Health
- Technology Development

✅ Validates votes (`for / against / abstain`)  
✅ Colored console output (Windows)  
✅ Saves results to a text file  
✅ View past voting sessions  
✅ Compare turnout with previous sessions  
✅ Clear saved results

---

## 🧠 How It Works

The program provides:

1. **Conduct Voting**
   - Each country votes
   - Validates input
   - Counts:
     - For
     - Against
     - Abstain
   - Determines whether the resolution passed  
     ✅ Resolution passes if `For > 12`

2. **Store Results**
   - Saves voting details to:
