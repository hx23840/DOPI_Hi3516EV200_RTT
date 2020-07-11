/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __HI_SPI_H__
#define __HI_SPI_H__

#define SPI1_REG_BASE 0x12071000
#define SPI0_REG_BASE 0x12070000

/* SPI外设寄存器 */
#define REG_SPI_CR0             0x00
#define SPI_CR0_SCR_SHIFT       (8)
#define SPI_CR0_SPH_SHIFT       (7)
#define SPI_CR0_SPO_SHIFT       (6)
#define SPI_CR0_FRF_SHIFT       (4)
#define SPI_CR0_DSS_SHIFT       (0)
#define SPI_CR0_SCR             (0xff << 8) /* clkout=clk/(cpsdvsr*(scr+1)) */
#define SPI_CR0_SPH             (0x1 << 7)  /* spi phase */
#define SPI_CR0_SPO             (0x1 << 6)  /* spi clk polarity */
#define SPI_CR0_FRF             (0x3 << 4)  /* frame format set */
#define SPI_CR0_DSS             (0xf << 0)  /* data bits width */

#define REG_SPI_CR1             0x04
#define SPI_CR1_WAIT_EN_SHIFT   (15)
#define SPI_CR1_WAIT_VAL_SHIFT  (8)
#define SPI_CR1_ALT_SHIFT       (6)
#define SPI_CR1_BIG_END_SHIFT   (4)
#define SPI_CR1_MS_SHIFT        (2)
#define SPI_CR1_SSE_SHIFT       (1)
#define SPI_CR1_LBN_SHIFT       (0)
#define SPI_CR1_WAIT_EN         (0x1 << 15)
#define SPI_CR1_WAIT_VAL        (0x7f << 8)
#define SPI_CR1_ALT             (0x1 << 6) /* alt mode:spi enable csn is select; spi disable csn is cancel */
#define SPI_CR1_BIG_END         (0x1 << 4) /* big end or little */
#define SPI_CR1_MS              (0x1 << 2) /* master-slave mode */
#define SPI_CR1_SSE             (0x1 << 1) /* spi enable set */
#define SPI_CR1_LBN             (0x1 << 0) /* loopback mode */

#define REG_SPI_DR              0x08

#define REG_SPI_SR              0x0c
#define SPI_SR_BSY_SHIFT        (4)
#define SPI_SR_RFF_SHIFT        (3)
#define SPI_SR_RNE_SHIFT        (2)
#define SPI_SR_TNF_SHIFT        (1)
#define SPI_SR_TFE_SHIFT        (0)
#define SPI_SR_BSY              (0x1 << 4)/* spi busy flag */
#define SPI_SR_RFF              (0x1 << 3)/* Whether to send fifo is full */
#define SPI_SR_RNE              (0x1 << 2)/* Whether to send fifo is no empty */
#define SPI_SR_TNF              (0x1 << 1)/* Whether to send fifo is no full */
#define SPI_SR_TFE              (0x1 << 0)/* Whether to send fifo is empty */

#define REG_SPI_CPSR            0x10
#define SPI_CPSR_CPSDVSR_SHIFT  (0)
#define SPI_CPSR_CPSDVSR        (0xff << 0)  /* even 2~254 */

#define REG_SPI_IMSC            0x14
#define REG_SPI_RIS             0x18
#define REG_SPI_MIS             0x1c
#define REG_SPI_ICR             0x20

#endif /* __HI_GIC_H__ */
