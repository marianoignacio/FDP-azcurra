// SIEMPRE es igual:
int ml;
bool continuar;

ml = 0;
continuar = true;

    while (continuar == true && ml < MAX) {
    scanf("%d", &dato);
    
    if (dato == 0)
        continuar = false;
    else {
        vector[ml] = dato;
        ml++;
    }
    }
```

### **2. Atajos mentales FOR vs WHILE**
```
┌─────────────────────────────────────┐
│ ¿Dice un NÚMERO en el enunciado?   │
│ "4 notas", "n elementos", "10 ite" │
│         → FOR directo ✅            │
└─────────────────────────────────────┘

┌─────────────────────────────────────┐
│ ¿Dice "hasta" o "mientras"?        │
│ "hasta 0", "hasta encontrar"       │
│         → WHILE directo ✅          │
└─────────────────────────────────────┘

┌─────────────────────────────────────┐
│ ¿Dice "recorrer el vector"?        │
│         → FOR directo ✅            │
└─────────────────────────────────────┘

┌─────────────────────────────────────┐
│ ¿Dice "buscar" o "validar"?        │
│         → WHILE con bandera ✅      │
└─────────────────────────────────────┘
```

### **3. Checklist de 30 segundos (antes de empezar a escribir)**
```
□ 1. ¿Cuántas funciones necesito? (1 o 2 máximo)
□ 2. ¿Qué tipo de return? (int, bool, float, void+punteros)
□ 3. ¿FOR o WHILE? (número fijo = FOR, condición = WHILE)
□ 4. ¿Necesito bandera es_primero? (máx/mín = SÍ)
□ 5. ¿Caso especial numero=0? (SÍ en dígitos)
```

---

## 🎯 PREGUNTAS CLAVE MIENTRAS ESCRIBÍS

### **Durante el código:**
```
Cada 5 líneas, preguntate:

1. ¿Inicialicé esta variable?
   → NO: ❌ vas a tener basura

2. ¿Esta variable cambia en el loop?
   → SÍ: Verificá que esté bien

3. ¿Estoy usando = o ==?
   → if (x = 5) ❌ | if (x == 5) ✅

4. ¿Necesito paréntesis en el puntero?
   → *cantidad++ ❌ | (*cantidad)++ ✅

5. ¿Este loop termina?
   → Verificá la condición de salida
```

### **Antes de pasar al siguiente punto:**
```
□ ¿Probé con un ejemplo mental?
□ ¿Qué pasa si numero = 0?
□ ¿Qué pasa si vector vacío (ml=0)?
□ ¿Qué pasa si todos son iguales?
□ ¿El resultado tiene sentido?
```

---

## 📋 FORMATO DE HOJA OPTIMIZADO

### **Organización del papel:**
```
┌─────────────────────────────────────────┐
│ PUNTO 1: Dígito mayor                   │
├─────────────────────────────────────────┤
│ [Acá tu código limpio]                  │
│                                         │
│ void digito_mayor(...)                  │
│ {                                       │
│     ...                                 │
│ }                                       │
│                                         │
│ ┌──────────────────┐ [Margen derecho]  │
│ │ Test: 1223       │ para debugging    │
│ │ mayor=3, cant=1  │                    │
│ └──────────────────┘                    │
└─────────────────────────────────────────┘
```

### **Debugging compacto en margen:**
```
Test 1: 1223 → 3 (1 vez) ✓
Test 2: 5525 → 5 (3 veces) ✓
Test 3: 0 → 0 (1 vez) ✓
```

---

## 💡 TRUCOS PSICOLÓGICOS PARA EL EXAMEN

### **1. Manejo del tiempo (90 minutos = 3 ejercicios)**
```
┌─────────────────────────────────┐
│ MINUTOS 0-5: Leo TODO           │
│ - Leo los 3 enunciados          │
│ - Elijo cuál hacer primero      │
│ (El más fácil SIEMPRE primero)  │
└─────────────────────────────────┘

┌─────────────────────────────────┐
│ MINUTOS 5-30: Ejercicio 1       │
│ - 2 min: Planificar             │
│ - 20 min: Escribir              │
│ - 3 min: Verificar              │
└─────────────────────────────────┘

┌─────────────────────────────────┐
│ MINUTOS 30-60: Ejercicio 2      │
│ (mismo esquema)                 │
└─────────────────────────────────┘

┌─────────────────────────────────┐
│ MINUTOS 60-90: Ejercicio 3      │
│ (mismo esquema)                 │
└─────────────────────────────────┘
```

### **2. Si te trabás (más de 5 minutos en un punto):**
```
STOP! → Pasá al siguiente ejercicio

Mejor:
- 2 ejercicios completos (70%)
- 1 ejercicio a medias (20%)
= 90% total ✅

Que:
- 1 ejercicio perfecto (33%)
- 2 ejercicios sin hacer
= 33% total ❌
```

### **3. Errores que te hacen perder tiempo:**
```
❌ NO hagas:
- Borrar y reescribir todo
- Pensar la solución perfecta
- Dudar entre dos opciones

✅ SÍ hacé:
- Tachar y escribir al lado
- Solución que funcione (no perfecta)
- Elegir una y seguir
```

---

## 🎓 PRÁCTICA: Ejercicio resuelto PASO A PASO

### **Enunciado:**
*"Escribir una función que reciba un número y devuelva TRUE si todos sus dígitos son distintos, FALSE en caso contrario."*

### **PASO 1: Análisis rápido (30 seg)**
```
Entrada: int numero
Salida: bool (todos_distintos)
Lógica: Comparar cada dígito con los anteriores

¿Necesito función? → SÍ (el enunciado lo pide)
¿FOR o WHILE? → WHILE (no sé cuántos dígitos)
¿Necesito vector? → SÍ (guardar dígitos ya vistos)
```

### **PASO 2: Plan en papel (1 min)**
```
Variables:
- numero (entrada)
- digitos[10] (guardar vistos)
- cantidad_digitos (contador)
- todos_distintos (resultado)
- digito (auxiliar)

Algoritmo:
1. Mientras numero > 0:
   - Sacar último dígito
   - Buscar si ya está en digitos[]
   - Si está: repetido, return false
   - Si no: guardar y continuar
2. Si terminó el while: return true