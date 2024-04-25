// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

//A versão em TypeScript ainda será adicionadea futuramente

import * as readline from 'readline';

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function reverseNumber(n: number): number {
    let m = 0;
    while (n !== 0) {
        m = m * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    return m;
}

async function main() {
    const input: string = await new Promise(resolve => {
        rl.question('Enter a number: ', input => resolve(input));
    });

    const number: number = parseInt(input);
    const reversedNumber: number = reverseNumber(number);

    if (number === reversedNumber) {
        console.log("1");
    } else {
        console.log("0");
    }

    rl.close();
}