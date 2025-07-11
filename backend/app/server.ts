import express from "express";
import myKey from "../routes/api";
import scanRouter from "../routes/scan";
import cors from "cors";

const app = express();
const port = process.env.PORT;
const host = process.env.HOST;

app.use(cors());
app.use(express.json());
app.use("/api", myKey);
app.use("/", scanRouter);

app.listen(port, () => {
    console.log(`http://${host}:${port}`);
});

export { app }