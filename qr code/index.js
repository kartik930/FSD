function generateQR() {
  let text = document.getElementById("qrText").value;

  // Clear previous QR
  document.getElementById("qrcode").innerHTML = "";

  if (text.trim() === "") {
    alert("Please enter some text!");
    return;
  }

  // Generate new QR code
  new QRCode(document.getElementById("qrcode"), {
    text: text,
    width: 200,
    height: 200,
    colorDark: "#000000",
    colorLight: "#ffffff",
    correctLevel: QRCode.CorrectLevel.H
  });
}

