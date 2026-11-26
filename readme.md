# 🌱 AutoHuerta – Sistema Automatizado de Hidroponía Indoor

**AutoHuerta** es un sistema de cultivo hidropónico de interior (*indoor*) diseñado para germinar y desarrollar plantas sin necesidad de suelo agrícola ni luz solar directa. El equipo automatiza los ciclos de iluminación, ventilación y recirculación de nutrientes mediante un microcontrolador **STM32**, permitiendo el cultivo doméstico limpio y autónomo durante todo el año.

Desarrollado por el grupo **HidroTec** (Juan Pablo de Urquiza y Gianluca Mariotto) para la materia *Proyecto y Diseño Electrónico* — E.E.S.T. N° 5 "2 de Abril", Temperley.

---

## ⚙️ Características Principales

* **Iluminación Full Spectrum:** Módulo LED COB Full Spectrum de 50 W (rango PAR 400–700 nm) con fotoperíodo automático de **18 h de luz / 6 h de oscuridad**.
* **Recirculación y Oxigenación Hídrica:** Bomba sumergible de 5 VCC activada **5 minutos por hora** para mantener oxigenada la solución nutritiva y evitar el estancamiento.
* **Control Térmico Sincronizado:** Disipador de aluminio con ventilador axial de 12 VCC accionado junto con la luminaria COB (con soporte para control de velocidad por PWM).
* **Electrónica Protegida y Escalable:** PCB doble faz con etapas de potencia optoacopladas (`PC817`), reguladores independientes (`L7805`) para lógica y motor, y pinera de expansión de 10 pines (7 GPIO + GND + 5 V + 12 V) para futuros sensores o conectividad IoT.

---

## 📂 Estructura del Repositorio

El proyecto está organizado en las siguientes carpetas para facilitar su reproducción:

```text
AutoHuerta/
├── Diseño 3D/      # Planos y modelos 3D del gabinete, soportes de disipador y canastas hidropónicas
├── Hardware/       # Proyecto en KiCad (esquemáticos, diseño de PCB doble faz, render 3D y lista de componentes)
├── Software/       # Código fuente en C/C++ (.ino) para el microcontrolador STM32F103C8T6
└── README.md       # Documentación general del proyecto
```

---

## 🛠️ Requisitos de Hardware y Software

* **Microcontrolador:** STM32F103C8T6 (*Blue Pill*, ARM Cortex-M3).
* **Programador:** ST-Link V2.
* **Entorno de desarrollo:** Arduino IDE con el núcleo **STM32duino** instalado.
* **CAD Electrónico:** KiCad (para abrir los archivos de la carpeta `/Hardware`).

---

## 🚀 Puesta en Marcha Rápida

1. **Preparar la solución nutritiva:** Llenar el recipiente del cajón frontal con agua limpia y agregar dos tapas de nutrientes *macro* y dos tapas de nutrientes *micro*.
2. **Colocar los cultivos:** Ubicar las plántulas en las canastas perforadas asegurando que sus raíces queden en contacto con el agua.
3. **Encender:** Conectar el equipo a la red eléctrica de **220 VCA**. El sistema iniciará automáticamente los ciclos de luz, ventilación y bombeo sin requerir configuración adicional.
4. **Mantenimiento:** Renovar el agua con nutrientes aproximadamente cada **25 días**.

---

## 📄 Licencia y Créditos

Proyecto educativo y de código abierto desarrollado por **HidroTec** — E.E.S.T. N° 5 "2 de Abril" (Temperley, Buenos Aires, Argentina).