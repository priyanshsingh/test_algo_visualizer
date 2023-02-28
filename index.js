const { exec, spawn } = require("child_process");
exec("g++ bubble.cpp", (error, stdout, stderr) => {
  if (error) {
    console.log(`error: ${error.message}`);
    return;
  }
  if (stderr) {
    console.log(`stderr: ${stderr}`);
    return;
  }

  const child = spawn("./a"); //where a is the exe file generated on compiling the code.
  child.stdin.write("5 5 1 4 2 8");
  child.stdin.end();
  child.stdout.on("data", (data) => {
    console.log(`sorted array :\n${data}`);
  });
});