#include "./src/RSA.h"

// Need this to fully implement expected interface
void evalModel() {;}
void toggleClock() {;}

// Need volatile to make sure the compiler doesn't make bus writes/read disappear
uint32_t read_word(uint32_t pAddress) {
    return *((volatile uint32_t *)pAddress);
}

void write_word(uint32_t pAddress, uint32_t pData) {
    *((volatile uint32_t *)pAddress) = pData;
}

int main(int argc, char **argv, char **env) {
    int i=0;

    printf("Initializing interface and resetting core\r\n");

    modexp_32bits(0x00000001, 0x00000002, 0x00000005, 0x00000001); //msg^exp < mod -> 1^2 < 5    
    modexp_32bits(0x00000001, 0x00000002, 0x00000003, 0x00000001); //msg^exp < mod -> 1^2 < 3
    modexp_32bits(0x00000002, 0x00000002, 0x00000005, 0x00000004); //msg^exp < mod -> 2^2 < 5
    modexp_32bits(0x00000002, 0x00000002, 0x00000003, 0x00000001); //msg^exp > mod -> 2^2 > 3
    modexp_32bits(0x00000004, 0x0000000D, 0x000001F1, 0x000001bd); //msg^exp > mod -> 4^13 > 497
    modexp_32bits(0x01234567, 0x89ABCDEF, 0x11111111, 0x0D9EF081); //msg^exp > mod -> 19088743^2309737967 > 286331153
    modexp_32bits(0x30000000, 0xC0000000, 0x00A00001, 0x0000CC3F); //msg^exp > mod ->
 

    //Convert input from ASCII to HEX
    a2h(IMSG, SMSG, &PMSG);
    printf("Input:%s\r\n", IMSG);
    DMSG = (char*)malloc(SMSG);

    //Extract Public and Private Key information
    if(priKey(FPRI, SPRI)); else exit(EXIT_FAILURE);
    if(pubKey(FPUB, SPUB)); else exit(EXIT_FAILURE);
    
    //Use MSGs and Keys extract to perform RSA encrypt and decrypt
    //modexp_encrypt();
    //modexp_decrypt();
    
    //Preset Test: 32bit exponent with 2048bit modulus
    //exp32bit_mod2048bit_test();
    
    //32-bit modulo exponentiation tests
    modexp_32bits(0x00000001, 0x00000002, 0x00000005, 0x00000001); //msg^exp < mod -> 1^2 < 5    
    //modexp_32bits(0x00000001, 0x00000002, 0x00000003, 0x00000001); //msg^exp < mod -> 1^2 < 3
    //modexp_32bits(0x00000002, 0x00000002, 0x00000005, 0x00000004); //msg^exp < mod -> 2^2 < 5
    //modexp_32bits(0x00000002, 0x00000002, 0x00000003, 0x00000001); //msg^exp > mod -> 2^2 > 3
    //modexp_32bits(0x00000004, 0x0000000D, 0x000001F1, 0x000001bd); //msg^exp > mod -> 4^13 > 497
    //modexp_32bits(0x01234567, 0x89ABCDEF, 0x11111111, 0x0D9EF081); //msg^exp > mod -> 19088743^2309737967 > 286331153
    //modexp_32bits(0x30000000, 0xC0000000, 0x00A00001, 0x0000CC3F); //msg^exp > mod ->
    
    //For Testing -> Generated Text equal to Plain Text
    for(i=0; i<64; i++) GMSG[i]=PMSG[i];

    //Convert input from ASCII to HEX
    h2a(PMSG, SMSG, &DMSG);
    printf("OUTPUT: %s\r\n", DMSG);
    
    printf("Completed\n\r");

    return 0;
}
