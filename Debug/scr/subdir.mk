################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../scr/01_tower_hanoi.cpp \
../scr/02_Fibonacci_numbers.cpp \
../scr/03_Baska_triangle.cpp \
../scr/04_Tricolor_chess.cpp \
../scr/05_Knight_Way.cpp \
../scr/06_common_least_factor.cpp \
../scr/07_selection_insertion_bubble_sort.cpp \
../scr/08_improved_insertion_sort.cpp \
../scr/09_improved_selection_sort.cpp \
../scr/10_fast_sort_0.cpp \
../scr/11_fast_sort_1.cpp \
../scr/12_fast_sort_2.cpp \
../scr/13_merge_sort.cpp \
../scr/14_radix_sort.cpp 

OBJS += \
./scr/01_tower_hanoi.o \
./scr/02_Fibonacci_numbers.o \
./scr/03_Baska_triangle.o \
./scr/04_Tricolor_chess.o \
./scr/05_Knight_Way.o \
./scr/06_common_least_factor.o \
./scr/07_selection_insertion_bubble_sort.o \
./scr/08_improved_insertion_sort.o \
./scr/09_improved_selection_sort.o \
./scr/10_fast_sort_0.o \
./scr/11_fast_sort_1.o \
./scr/12_fast_sort_2.o \
./scr/13_merge_sort.o \
./scr/14_radix_sort.o 

CPP_DEPS += \
./scr/01_tower_hanoi.d \
./scr/02_Fibonacci_numbers.d \
./scr/03_Baska_triangle.d \
./scr/04_Tricolor_chess.d \
./scr/05_Knight_Way.d \
./scr/06_common_least_factor.d \
./scr/07_selection_insertion_bubble_sort.d \
./scr/08_improved_insertion_sort.d \
./scr/09_improved_selection_sort.d \
./scr/10_fast_sort_0.d \
./scr/11_fast_sort_1.d \
./scr/12_fast_sort_2.d \
./scr/13_merge_sort.d \
./scr/14_radix_sort.d 


# Each subdirectory must supply rules for building sources it contributes
scr/%.o: ../scr/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


