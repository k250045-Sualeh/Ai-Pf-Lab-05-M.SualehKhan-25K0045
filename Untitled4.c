#include <stdio.h>

int main() {
    int device_type, symp_code;

    printf("Choose your device\n1. Laptop\n2. Smartphone\n3. Router\n");
    scanf("%d", &device_type);

    switch(device_type) {
        case 1: // Laptop
            printf("Symptom codes:\n");
            printf("10. WONT TURN ON\n");
            printf("11. OVERHEATING\n");
            printf("12. SLOW PERFORMANCE\n");
            scanf("%d", &symp_code);
            switch(symp_code) {
                case 10:
                    printf("Check power adapter and battery connections.\nTry a different power outlet.\nRemove battery and hold power button for 30 seconds.\n");
                    break;
                case 11:
                    printf("Clean fans and ensure proper ventilation.\nCheck for dust accumulation. Use a cooling pad.\nMonitor CPU usage.\n");
                    break;
                case 12:
                    printf("Run system diagnostics and check resource usage.\nScan for malware.\nUpgrade RAM if necessary.\nDefragment hard drive.\n");
                    break;
                default:
                    printf("Invalid symptom code.\n");
            }
            break;

        case 2: // Smartphone
            printf("Symptom codes:\n");
            printf("20. BATTERY DRAINS FAST\n");
            printf("21. NO SIGNAL\n");
            printf("22. TOUCHSCREEN UNRESPONSIVE\n");
            scanf("%d", &symp_code);
            switch(symp_code) {
                case 20:
                    printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.\n");
                    break;
                case 21:
                    printf("Try toggling airplane mode. Restart your device. Check SIM card.\n");
                    break;
                case 22:
                    printf("Try restarting the device. Clean screen. Check for software updates.\n");
                    break;
                default:
                    printf("Invalid symptom code.\n");
            }
            break;

        case 3: // Router
            printf("Symptom codes:\n");
            printf("30. NO INTERNET CONNECTION\n");
            printf("31. WIFI SIGNAL WEAK\n");
            printf("32. DEVICE CAN'T CONNECT\n");
            scanf("%d", &symp_code);
            switch(symp_code) {
                case 30:
                    printf("Check internet service status. Restart the router. Check cables and connections.\n");
                    break;
                case 31:
                    printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.\n");
                    break;
                case 32:
                    printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart the connecting device. Check for IP conflicts.\n");
                    break;
                default:
                    printf("Invalid symptom code.\n");
                    break;
            }
            break;

        default:
            printf("Invalid device type code.\n");
            break;
    }

    return 0;
}

