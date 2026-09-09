import { NextRequest, NextResponse } from "next/server";

export function GET(request: NextRequest) {
  return NextResponse.json([
    {
      id: 1,
      name: "milk",
      price: 25,
    },
    {
      id: 2,
      name: "chocolate",
      price: 10,
    },
  ]);
}

export async function PUT(request: NextRequest) {
  let body = await request.json();
  if (!body.name)
    return NextResponse.json({ error: "user not found" }, { status: 404 });
  return NextResponse.json({ id: 10, name: body.name, price: body.price });
}
