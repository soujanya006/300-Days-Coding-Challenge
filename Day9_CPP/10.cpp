

#define MCLK_ENABLE 0x00000001
#define SAMPLE 0x00000000
#define HOLD 0x00000002
#define COMPENSATION_VALUE 0x00000061 // default vh 0.45 vl 0.35
#define NUM_ITERATIONS 1
#define GPO_ADDR (A_CORE_AXI4LGPIO + GPIO_OUT_REG)
// Col 1 100% working //Col 2 is 80% working //Col 4 100% working
#define VMM_COLUMN_0 0
#define VMM_COLUMN_1 1
#define VMM_COLUMN_2 2
#define VMM_COLUMN_3 3
#define VMM_COLUMN_4 4 // 4
#define VMM_COLUMN_5 5
#define VMM_COLUMN_6 6
#define VMM_COLUMN_7 7
#define VMM_COLUMN_8 8
#define VMM_COLUMN_9 9

#define ADC_COLUMN_0 0
#define ADC_COLUMN_1 1
#define ADC_COLUMN_2 2
#define ADC_COLUMN_3 3
#define ADC_COLUMN_4 4 // 4
#define ADC_COLUMN_5 5
#define ADC_COLUMN_6 6
#define ADC_COLUMN_7 7
#define ADC_COLUMN_8 8
#define ADC_COLUMN_9 9

#define Number_of_Columns 10

#define IMAGE_SAMPLES 84  // Total number of image samples
#define WEIGHT_SAMPLES 84 // Total number of weight samples
#define BIAS_SAMPLES 10   // Total number of weight samples

uint8_t image[IMAGE_SAMPLES] = {0b00111110, 0b00000000, 0b00111110, 0b00111100, 0b00110111, 0b00000000, 0b00111110, 0b00000011, 0b00000000, 0b00011001, 0b00000110, 0b00000010, 0b00111110, 0b00111100, 0b00111110, 0b00111110, 0b00000000, 0b00000000, 0b00111110, 0b00000000, 0b00000000, 0b00000000, 0b00111110, 0b00001010, 0b00111110, 0b00111110, 0b00000000, 0b00000010, 0b00111101, 0b00011001, 0b00111110, 0b00000001, 0b00000000, 0b00111111, 0b00111110, 0b00111110, 0b00000000, 0b00000110, 0b00111110, 0b00111000, 0b00000000, 0b00111110, 0b00111110, 0b00000000, 0b00111110, 0b00000000, 0b00000000, 0b00111110, 0b00111110, 0b00000000, 0b00111110, 0b00000000, 0b00111111, 0b00100101, 0b00111110, 0b00111110, 0b00000000, 0b00111110, 0b00111110, 0b00111110, 0b00000000, 0b00111101, 0b00000000, 0b00000001, 0b00000001, 0b00000000, 0b00111110, 0b00111110, 0b00000000, 0b00001011, 0b00000000, 0b00000000, 0b00000000, 0b00111011, 0b00111110, 0b00111011, 0b00000000, 0b00000000, 0b00111110, 0b00000011, 0b00000001, 0b00000000, 0b00000000, 0b00111000};

uint8_t weight_1[WEIGHT_SAMPLES] = {0b10001101, 0b01010000, 0b10001001, 0b01010011, 0b01001110, 0b10011011, 0b01010001, 0b01010011, 0b10001111, 0b10001010, 0b01000001, 0b10010110, 0b10011111, 0b01001110, 0b01010100, 0b01001011, 0b10010100, 0b10010100, 0b10011011, 0b01010111, 0b01000111, 0b10000011, 0b01001000, 0b10010111, 0b10001110, 0b10100000, 0b10010110, 0b01001011, 0b10000010, 0b10000000, 0b01001101, 0b01011000, 0b10100100, 0b01001010, 0b10000011, 0b01001100, 0b10001111, 0b10100100, 0b01010100, 0b01001100, 0b01010101, 0b10010010, 0b10001101, 0b10001111, 0b01001001, 0b10011011, 0b01000111, 0b01011010, 0b10010001, 0b10010010, 0b01010110, 0b01010110, 0b10010101, 0b01011111, 0b01001011, 0b01001001, 0b10100000, 0b10010000, 0b10010111, 0b10001110, 0b01000000, 0b01010101, 0b01010101, 0b10001111, 0b10001110, 0b01010100, 0b10001111, 0b10010000, 0b01010010, 0b10100000, 0b10010110, 0b10010100, 0b01011100, 0b10010111, 0b10010000, 0b10011001, 0b01011100, 0b10010111, 0b01001001, 0b10000111, 0b10000111, 0b01000101, 0b01001100, 0b10010010};

uint8_t weight_2[WEIGHT_SAMPLES] = {0b10001111, 0b10010110, 0b01001111, 0b01010110, 0b10001010, 0b10100100, 0b01010110, 0b01000000, 0b01010011, 0b10010011, 0b10001110, 0b01011011, 0b01001011, 0b01011000, 0b10001010, 0b01000010, 0b10011001, 0b10001010, 0b10100000, 0b01001111, 0b10100001, 0b01010011, 0b10001111, 0b01001110, 0b01010111, 0b10010111, 0b01010000, 0b10010110, 0b10010100, 0b01000011, 0b01010010, 0b01001101, 0b01001010, 0b01010100, 0b01000111, 0b01001100, 0b10011101, 0b01001001, 0b01010110, 0b01011000, 0b10010010, 0b10000100, 0b01011001, 0b01100001, 0b10010100, 0b01010001, 0b10100100, 0b10010000, 0b10011100, 0b01000110, 0b10010100, 0b10010100, 0b10000000, 0b10000110, 0b01010101, 0b10011110, 0b01010111, 0b01010011, 0b01010011, 0b01000011, 0b10100001, 0b10001111, 0b10011010, 0b01011110, 0b10001100, 0b01001010, 0b10100011, 0b10000101, 0b01010000, 0b10000000, 0b10001000, 0b01010010, 0b01001101, 0b10000000, 0b01010001, 0b10000011, 0b10001110, 0b10011111, 0b10010101, 0b01001010, 0b01010110, 0b10010101, 0b10011001, 0b01010001};

uint8_t weight_3[WEIGHT_SAMPLES] = {0b01010101, 0b10100000, 0b01011001, 0b01001000, 0b01001111, 0b10001110, 0b01011001, 0b10011010, 0b10010100, 0b10010010, 0b10011001, 0b10001010, 0b01010010, 0b01010001, 0b01011110, 0b10001011, 0b10100000, 0b10011110, 0b01011000, 0b10100101, 0b10001100, 0b10011010, 0b10000010, 0b01000010, 0b10000000, 0b01011000, 0b10001110, 0b10010100, 0b01001111, 0b10001101, 0b01010011, 0b10100010, 0b10000010, 0b01001110, 0b01001100, 0b01001100, 0b10011010, 0b01000110, 0b01010000, 0b01001110, 0b10100010, 0b01001101, 0b01010001, 0b10010110, 0b01100000, 0b10011010, 0b01000001, 0b01001011, 0b01011011, 0b10010110, 0b01010010, 0b10000101, 0b01010100, 0b01000010, 0b01001001, 0b01000111, 0b10001101, 0b10001111, 0b01011000, 0b01011011, 0b10011000, 0b01010101, 0b10001110, 0b10010100, 0b10000001, 0b01000011, 0b01001010, 0b01001010, 0b10001010, 0b01001011, 0b10010010, 0b10100101, 0b10010111, 0b10001111, 0b01001010, 0b01000010, 0b10001111, 0b10010010, 0b01010010, 0b10010000, 0b10010000, 0b10010001, 0b10010101, 0b01010000};

uint8_t weight_4[WEIGHT_SAMPLES] = {0b10001011, 0b10011100, 0b01011101, 0b01001100, 0b01010010, 0b10010110, 0b10010101, 0b10011010, 0b01001101, 0b01011001, 0b10010010, 0b10000110, 0b01001111, 0b01010100, 0b10011110, 0b01010011, 0b01001010, 0b01010101, 0b01001110, 0b01010000, 0b10000010, 0b10011001, 0b10000010, 0b10000000, 0b01010100, 0b01000111, 0b10100001, 0b01010001, 0b10000110, 0b10001101, 0b10000100, 0b10011001, 0b10011111, 0b10010110, 0b10010100, 0b10010001, 0b01011100, 0b01010011, 0b10010111, 0b10001100, 0b10011000, 0b10010100, 0b01010101, 0b10010010, 0b10001111, 0b10010010, 0b01001100, 0b01000010, 0b10001001, 0b01011001, 0b01010010, 0b10010011, 0b01010001, 0b10001111, 0b10100111, 0b01010001, 0b10001111, 0b10011010, 0b10011010, 0b10010111, 0b01000010, 0b01010110, 0b10010001, 0b01011010, 0b01001110, 0b01000111, 0b10000001, 0b01010100, 0b10000101, 0b01001010, 0b10000101, 0b01011000, 0b01011000, 0b01010110, 0b10001000, 0b10010000, 0b10011101, 0b01000110, 0b01001000, 0b10011100, 0b10001101, 0b01001101, 0b01000010, 0b01000101};

uint8_t weight_5[WEIGHT_SAMPLES] = {0b01001001, 0b10010101, 0b01000101, 0b10010000, 0b10010111, 0b01010011, 0b10010110, 0b01010010, 0b10011011, 0b01010111, 0b01011010, 0b01001010, 0b10000101, 0b10011110, 0b10001000, 0b10010111, 0b10001111, 0b10011011, 0b01010001, 0b01010000, 0b01010000, 0b10010001, 0b10011110, 0b10010101, 0b01011000, 0b10011110, 0b01000001, 0b01011001, 0b10011110, 0b01011101, 0b10101000, 0b01000100, 0b01001010, 0b01010111, 0b01001011, 0b01010000, 0b10001110, 0b10001001, 0b10011100, 0b10001100, 0b10011100, 0b01000010, 0b01000000, 0b10001000, 0b10000000, 0b01000011, 0b10001011, 0b10001011, 0b01001010, 0b10010101, 0b01010001, 0b01001000, 0b01010110, 0b10010011, 0b01010111, 0b01000100, 0b10000100, 0b01011111, 0b10000111, 0b10010110, 0b10001101, 0b10011001, 0b01001000, 0b01000011, 0b01001111, 0b01010000, 0b01010000, 0b01001110, 0b10011011, 0b10000101, 0b01010000, 0b10001100, 0b10010001, 0b01010101, 0b01010000, 0b01011011, 0b01001111, 0b10000011, 0b10001010, 0b01010000, 0b01011101, 0b10010100, 0b01010110, 0b10000100};

uint8_t weight_6[WEIGHT_SAMPLES] = {0b10000100, 0b01011011, 0b10011111, 0b10010110, 0b01001111, 0b01010001, 0b01001111, 0b10011011, 0b01001000, 0b10011000, 0b10000101, 0b01000110, 0b10010100, 0b10011011, 0b01001001, 0b10010011, 0b01001100, 0b01010001, 0b10011100, 0b01000110, 0b01000011, 0b01010101, 0b01001110, 0b10011110, 0b10001111, 0b01001011, 0b01010110, 0b01010111, 0b01001111, 0b01001101, 0b01000111, 0b01100000, 0b01000111, 0b01010111, 0b10011011, 0b10000101, 0b01010001, 0b01001111, 0b10011101, 0b01010001, 0b01010101, 0b10001011, 0b10010110, 0b10010010, 0b10010011, 0b01010100, 0b01010100, 0b01010010, 0b10010101, 0b01001110, 0b10010101, 0b10010111, 0b10011011, 0b10011000, 0b01000001, 0b01001001, 0b10100000, 0b01000101, 0b10010010, 0b10010101, 0b01000101, 0b01001001, 0b10011000, 0b01001010, 0b01000011, 0b10011110, 0b10010111, 0b10011101, 0b10001111, 0b01010100, 0b10010000, 0b01001001, 0b01001100, 0b01001010, 0b01000111, 0b10000011, 0b10011010, 0b01010001, 0b01001010, 0b10000100, 0b10010010, 0b10010101, 0b01010111, 0b01010110};

uint8_t weight_7[WEIGHT_SAMPLES] = {0b01011001, 0b01010010, 0b10001101, 0b10001001, 0b01010000, 0b10100001, 0b01000100, 0b10001101, 0b10001101, 0b01001001, 0b01010000, 0b01011010, 0b10101011, 0b10100111, 0b01010111, 0b01010010, 0b10011100, 0b01001101, 0b10001100, 0b10010011, 0b01010110, 0b01011101, 0b10011000, 0b01010101, 0b01010010, 0b01010110, 0b10000011, 0b01000000, 0b10010001, 0b10001000, 0b01000110, 0b01011001, 0b10001001, 0b01001110, 0b10011010, 0b01000110, 0b01010110, 0b01001111, 0b01011011, 0b10011010, 0b01001101, 0b01000010, 0b10001010, 0b10010101, 0b01000101, 0b10010101, 0b10011001, 0b10010001, 0b10100000, 0b01011010, 0b10000011, 0b01011100, 0b10000100, 0b10010100, 0b10100000, 0b01001100, 0b10010101, 0b01001100, 0b01010001, 0b01001110, 0b01000010, 0b10011111, 0b01001000, 0b10011011, 0b01010110, 0b01001010, 0b10010011, 0b01000110, 0b10010111, 0b10010000, 0b10001001, 0b10000101, 0b01000101, 0b10011011, 0b10000011, 0b10011001, 0b01010110, 0b10100010, 0b10000010, 0b01010101, 0b01011000, 0b10001011, 0b01001011, 0b10011111};

uint8_t weight_8[WEIGHT_SAMPLES] = {0b01011001, 0b01010000, 0b01010000, 0b10011000, 0b01010111, 0b01001101, 0b10010100, 0b01010101, 0b01000110, 0b10010010, 0b10010011, 0b10010111, 0b01001101, 0b01001101, 0b10011101, 0b01010111, 0b01010000, 0b01010001, 0b01000100, 0b01010000, 0b01010001, 0b01000011, 0b01000001, 0b01000111, 0b01011100, 0b10001111, 0b10010110, 0b10001011, 0b01001111, 0b10011110, 0b10100100, 0b01000000, 0b10010001, 0b01001110, 0b01010000, 0b10011011, 0b10010010, 0b10000011, 0b01011101, 0b01011000, 0b10100001, 0b10011001, 0b01011100, 0b10010001, 0b10010101, 0b01000011, 0b10101011, 0b10101000, 0b01010001, 0b10011111, 0b10001011, 0b10010010, 0b01000111, 0b01010001, 0b01000000, 0b01000011, 0b01010111, 0b10011000, 0b10001101, 0b01000001, 0b10100010, 0b10010011, 0b01010011, 0b01000101, 0b10010101, 0b01000111, 0b10010110, 0b10010110, 0b01000010, 0b01001111, 0b01011111, 0b10011011, 0b10011001, 0b01010011, 0b10010111, 0b10001001, 0b10000000, 0b01000100, 0b01000000, 0b01010100, 0b10100011, 0b01010011, 0b01000010, 0b01000110};

uint8_t weight_9[WEIGHT_SAMPLES] = {0b10011001, 0b01010010, 0b10001100, 0b01011010, 0b01011001, 0b01001100, 0b10000111, 0b01001010, 0b01001110, 0b01001011, 0b01010101, 0b10001011, 0b01001111, 0b10011010, 0b10011000, 0b01000010, 0b01000111, 0b01001010, 0b01010010, 0b10001001, 0b10001010, 0b01000001, 0b01001101, 0b01001100, 0b10010100, 0b10000100, 0b01011100, 0b10001101, 0b01001001, 0b10001101, 0b01000001, 0b10010011, 0b01001101, 0b10010100, 0b01010011, 0b01001101, 0b01011100, 0b01001011, 0b10010100, 0b10000011, 0b01010100, 0b01010110, 0b10000110, 0b10010001, 0b10001101, 0b01010010, 0b01000000, 0b01001010, 0b01011000, 0b01010100, 0b01001111, 0b10001100, 0b10000000, 0b01000010, 0b10100010, 0b01000010, 0b10001101, 0b10000100, 0b01001110, 0b01010010, 0b01000111, 0b10011001, 0b10010100, 0b10011001, 0b10010101, 0b01001110, 0b01010111, 0b10000101, 0b01011000, 0b10010011, 0b10001111, 0b01001010, 0b10001011, 0b10001001, 0b01011001, 0b10100111, 0b10001100, 0b01001110, 0b10010101, 0b10001000, 0b10011010, 0b10011100, 0b10100010, 0b10011010};

uint8_t weight_10[WEIGHT_SAMPLES] = {0b10010111, 0b01000110, 0b10010100, 0b10000010, 0b10100010, 0b01010000, 0b10001011, 0b01010100, 0b01011011, 0b10000011, 0b10001111, 0b10001100, 0b01001010, 0b01001100, 0b01001111, 0b10010110, 0b01000110, 0b10010100, 0b01010110, 0b01001111, 0b01001111, 0b01000000, 0b10001110, 0b01010000, 0b10011100, 0b10000111, 0b01001101, 0b10011011, 0b10001101, 0b10010100, 0b10011101, 0b10011100, 0b01011100, 0b10011010, 0b10011000, 0b10010101, 0b10001100, 0b01000111, 0b10010100, 0b10010001, 0b01011010, 0b01010000, 0b01001111, 0b01011101, 0b01001111, 0b10001001, 0b01010001, 0b10011010, 0b10000110, 0b10001000, 0b10011101, 0b01010001, 0b10100011, 0b10001100, 0b01001100, 0b01000110, 0b10010011, 0b10011111, 0b10001011, 0b10001001, 0b01001011, 0b01000001, 0b01001110, 0b01001101, 0b10010010, 0b01001110, 0b01001101, 0b01001100, 0b01000100, 0b01000000, 0b01011101, 0b01001101, 0b01001111, 0b01010010, 0b10100011, 0b01010000, 0b01010100, 0b01010100, 0b10001110, 0b01010100, 0b01001100, 0b01010101, 0b01010001, 0b01001100};

uint8_t bias[BIAS_SAMPLES] = {0b10000100, 0b10000011, 0b10000000, 0b10000010, 0b10000000, 0b10000000, 0b01000011, 0b10000001, 0b01000001, 0b01000111};

// 4 is 0b11011
uint8_t MUX_CONFIG[Number_of_Columns] = {0b11111 /*0*/, 0b11110 /*1*/, 0b11101 /*2*/, 0b11100 /*3*/, 0b11011 /*4*/, 0b11010 /*5*/, 0b11001 /*6*/, 0b11000 /*7*/, 0b10111 /*8*/, 0b10110 /*9*/};
int ADC_COL_INDEX[Number_of_Columns] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//////////////////// asic related

void initSystem()
{
    init_uart((volatile uint32_t *)A_CORE_AXI4LUART, BAUDRATE);
    transmit_byte((volatile uint8_t *)A_CORE_AXI4LUART, 'A');
    wait_for_uart_ready((volatile uint8_t *)A_CORE_AXI4LUART);
}

//////////////////// asic related

//////////////////// asic related

void resetSequence()
{
    vmm_write_reset_sram(0);
    vmm_write_reset_sram(1);
    vmm_write_vcm_en(0);
    vmm_write_sh_en(0);
    vmm_write_r3_tune(0b111111111);
    vmm_write_r_tune(1);
}
//////////////////// asic related

//////////////////// asic related

void writeCompensationValues(uint32_t baseAddr, uint32_t startOffset, uint32_t endOffset, uint32_t value, volatile uint32_t gpoAddr3)
{
    gpo_write(gpoAddr3, MCLK_ENABLE);
    vmm_write_comp_en(0);
    vmm_write_reset_op_comp(0);
    vmm_write_reset_ip_comp(0);
    vmm_write_comp_rdb_wr_gbl(0);
    vmm_write_reset_op_comp(1);
    vmm_write_reset_ip_comp(1);
    vmm_write_comp_rdb_wr_gbl(1);
    for (volatile uint32_t addr = baseAddr + startOffset; addr <= baseAddr + endOffset; addr += 8)
    {
        gpo_write((volatile uint32_t *)addr, value);
    }
    gpo_write(gpoAddr3, SAMPLE);
}

//////////////////// asic related

void configureWeights_1(uint8_t *weight_column, int column_number)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_mat_in_bin(row, column_number, weight_column[row]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_mat_in_bin(row, column_number, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void configureWeights_2(uint8_t *weight_column, int column_number)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_mat_in_bin(row, column_number, weight_column[row + 28]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_mat_in_bin(row, column_number, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void configureWeights_3(uint8_t *weight_column, int column_number)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_mat_in_bin(row, column_number, weight_column[row + 56]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_mat_in_bin(row, column_number, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void configureVin_1(uint8_t *image_column)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_vec_in_bin(row, image_column[row]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_vec_in_bin(row, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void configureVin_2(uint8_t *image_column)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_vec_in_bin(row, image_column[row + 28]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_vec_in_bin(row, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void configureVin_3(uint8_t *image_column)
{
    vmm_write_sram_wr(1);
    vmm_write_sram_rd(1);
    for (int row = 0; row <= 27; row++)
    {
        vmm_write_vec_in_bin(row, image_column[row + 55]);
    }
    for (int row = 28; row <= 35; row++)
    {
        vmm_write_vec_in_bin(row, 0b00000000);
    }
    // vmm_write_sram_wr(0);vmm_write_sram_rd(0);
}

void setupAdcMux(uint8_t adc_column)
{
    vmm_write_reset_adc(0);
    vmm_write_reset_adc(1);
    vmm_write_adc_mux_wr(0);
    vmm_write_adc_mux_wr(1);
    vmm_write_adc_mux_config(0b11111);
    vmm_write_adc_mux_config(adc_column);
}

uint32_t clock1 = 0;
uint32_t clock2 = 0;
void main()
{
    initSystem();
    resetSequence();
    writeCompensationValues(A_CORE_AXI4LVMM, 0x08C, 0x3A8, COMPENSATION_VALUE, GPO_ADDR);

    configureWeights_1(weight_1, VMM_COLUMN_0);
    configureWeights_1(weight_2, VMM_COLUMN_1);
    configureWeights_1(weight_3, VMM_COLUMN_2);
    configureWeights_1(weight_4, VMM_COLUMN_3);
    configureWeights_1(weight_5, VMM_COLUMN_4);
    configureWeights_1(weight_6, VMM_COLUMN_5);
    configureWeights_1(weight_7, VMM_COLUMN_6);
    configureWeights_1(weight_8, VMM_COLUMN_7);
    configureWeights_1(weight_9, VMM_COLUMN_8);
    configureWeights_1(weight_10, VMM_COLUMN_9);
    configureVin_1(image);
    uint8_t ADC_OUT_1[Number_of_Columns][NUM_ITERATIONS] = {0};
    uint64_t sum_1[Number_of_Columns] = {0};
    uint32_t AVG_ADC_OUT_1[Number_of_Columns] = {0};
    for (int ADC_COLUMN = 0; ADC_COLUMN <= 9; ADC_COLUMN++)
    {
        for (int nosh = 0; nosh < NUM_ITERATIONS; nosh++)
        {
            setupAdcMux(MUX_CONFIG[ADC_COLUMN]);
            // vmm_write_r3_tune(0b000000000);
            // vmm_write_r_tune(0);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, SAMPLE);
            }
            // vmm_write_r3_tune(0b111111111);
            // vmm_write_r_tune(1);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, HOLD);
            }
            ADC_OUT_1[ADC_COLUMN][nosh] = vmm_read_adc(ADC_COL_INDEX[ADC_COLUMN]);
            sum_1[ADC_COLUMN] += ADC_OUT_1[ADC_COLUMN][nosh];
        } // nosh closed
        AVG_ADC_OUT_1[ADC_COLUMN] = (sum_1[ADC_COLUMN] / NUM_ITERATIONS) & 0x3F;
        // printf("ADC COLUMN %u: ADC output in Decimal is %u\n", ADC_COLUMN, AVG_ADC_OUT_1[ADC_COLUMN]);
    } // close ADC_COLUMN

    configureWeights_2(weight_1, VMM_COLUMN_0);
    configureWeights_2(weight_2, VMM_COLUMN_1);
    configureWeights_2(weight_3, VMM_COLUMN_2);
    configureWeights_2(weight_4, VMM_COLUMN_3);
    configureWeights_2(weight_5, VMM_COLUMN_4);
    configureWeights_2(weight_6, VMM_COLUMN_5);
    configureWeights_2(weight_7, VMM_COLUMN_6);
    configureWeights_2(weight_8, VMM_COLUMN_7);
    configureWeights_2(weight_9, VMM_COLUMN_8);
    configureWeights_2(weight_10, VMM_COLUMN_9);
    configureVin_2(image);
    uint8_t ADC_OUT_2[Number_of_Columns][NUM_ITERATIONS] = {0};
    uint64_t sum_2[Number_of_Columns] = {0};
    uint32_t AVG_ADC_OUT_2[Number_of_Columns] = {0};
    for (int ADC_COLUMN = 0; ADC_COLUMN <= 9; ADC_COLUMN++)
    {
        for (int nosh = 0; nosh < NUM_ITERATIONS; nosh++)
        {
            setupAdcMux(MUX_CONFIG[ADC_COLUMN]);
            // vmm_write_r3_tune(0b000000000);
            // vmm_write_r_tune(0);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, SAMPLE);
            }
            // vmm_write_r3_tune(0b111111111);
            // vmm_write_r_tune(1);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, HOLD);
            }
            ADC_OUT_2[ADC_COLUMN][nosh] = vmm_read_adc(ADC_COL_INDEX[ADC_COLUMN]);
            sum_2[ADC_COLUMN] += ADC_OUT_2[ADC_COLUMN][nosh];
        } // nosh closed
        AVG_ADC_OUT_2[ADC_COLUMN] = (sum_2[ADC_COLUMN] / NUM_ITERATIONS) & 0x3F;
        // printf("ADC COLUMN %u: ADC output in Decimal is %u\n", ADC_COLUMN, AVG_ADC_OUT_2[ADC_COLUMN]);
    } // close ADC_COLUMN

    configureWeights_3(weight_1, VMM_COLUMN_0);
    configureWeights_3(weight_2, VMM_COLUMN_1);
    configureWeights_3(weight_3, VMM_COLUMN_2);
    configureWeights_3(weight_4, VMM_COLUMN_3);
    configureWeights_3(weight_5, VMM_COLUMN_4);
    configureWeights_3(weight_6, VMM_COLUMN_5);
    configureWeights_3(weight_7, VMM_COLUMN_6);
    configureWeights_3(weight_8, VMM_COLUMN_7);
    configureWeights_3(weight_9, VMM_COLUMN_8);
    configureWeights_3(weight_10, VMM_COLUMN_9);
    configureVin_3(image);
    uint8_t ADC_OUT_3[Number_of_Columns][NUM_ITERATIONS] = {0};
    uint64_t sum_3[Number_of_Columns] = {0};
    uint32_t AVG_ADC_OUT_3[Number_of_Columns] = {0};
    for (int ADC_COLUMN = 0; ADC_COLUMN <= 9; ADC_COLUMN++)
    {
        for (int nosh = 0; nosh < NUM_ITERATIONS; nosh++)
        {
            setupAdcMux(MUX_CONFIG[ADC_COLUMN]);
            // vmm_write_r3_tune(0b000000000);
            // vmm_write_r_tune(0);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, SAMPLE);
            }
            // vmm_write_r3_tune(0b111111111);
            // vmm_write_r_tune(1);
            for (int sh = 0; sh < 1; sh++)
            {
                gpo_write(GPO_ADDR, HOLD);
            }
            ADC_OUT_3[ADC_COLUMN][nosh] = vmm_read_adc(ADC_COL_INDEX[ADC_COLUMN]);
            sum_3[ADC_COLUMN] += ADC_OUT_3[ADC_COLUMN][nosh];
        } // nosh closed
        AVG_ADC_OUT_3[ADC_COLUMN] = (sum_3[ADC_COLUMN] / NUM_ITERATIONS) & 0x3F;
        // printf("ADC COLUMN %u: ADC output in Decimal is %u\n", ADC_COLUMN, AVG_ADC_OUT_3[ADC_COLUMN]);
    } // close ADC_COLUMN
    uint32_t Final_Values[Number_of_Columns] = {0};
    for (int fv = 0; fv < Number_of_Columns; fv++)
    {
        Final_Values[fv] = AVG_ADC_OUT_1[fv] + AVG_ADC_OUT_2[fv] + AVG_ADC_OUT_3[fv];
        printf("ADC COLUMN %u: Final FC output in Decimal is %u\n", fv, Final_Values[fv]);
    }

    for (;;)
    {
    } // for infinty loop close
} // close main

// number of cycles for 1 command is 51, (@RISC-V 100MHz, GOPs is 190, i.e. CIM-core clock 2MHz), (@RISC-V 200MHz, GOPs is 380, i.e. CIM-core clock 4MHz).
// This is the fastest that we can measure.
// In other words, if our VMM works fine with 200 MHz RISC-V freq. we can say that our IMC-core GOPS is 380.
