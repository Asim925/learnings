import { NextRequest, NextResponse } from "next/server";
import schema from "./schema";

export function GET(request: NextRequest) {
  // NextRequest prevents caching
  return NextResponse.json([
    { id: 1, name: "Ali" },
    { id: 2, name: "Asim" },
    { id: 3, name: "Ahmed" },
    { id: 4, name: "Ali" },
    { id: 5, name: "Asim" },
    { id: 6, name: "Ahmed" },
    { id: 7, name: "Ali" },
    { id: 9, name: "Asim" },
    { id: 10, name: "Ahmed" },
    { id: 11, name: "Ali" },
    { id: 12, name: "Asim" },
    { id: 13, name: "Ahmed" },
    { id: 14, name: "Ali" },
    { id: 15, name: "Asim" },
    { id: 16, name: "Ahmed" },
    { id: 17, name: "Ali" },
    { id: 19, name: "Asim" },
    { id: 9, name: "Alia" },
    { id: 20, name: "Ahmed" },
  ]);
}

export async function POST(request: NextRequest) {
  let body = await request.json();
  let validation = schema.safeParse(body);
  if (!validation.success)
    return NextResponse.json(validation.error.errors, { status: 404 });
  return NextResponse.json(body);
}
