import { log } from "console";
import { NextRequest, NextResponse } from "next/server";
import schema from "../schema";

interface Props {
  params: {
    id: number;
  };
}

export function GET(request: NextRequest, { params: { id } }: Props) {
  if (id > 10)
    return NextResponse.json({ error: `user ${id} not found`, status: 404 });
  return NextResponse.json({ id: id, name: "alii" });
}

export async function PUT(request: NextRequest, { params: { id } }: Props) {
  let body = await request.json();
  let validation = schema.safeParse(body);

  if (!validation.success)
    return NextResponse.json(validation.error.errors, { status: 400 });
  if (id > 10)
    return NextResponse.json({ error: "USER NOT FOUND" }, { status: 404 });
  return NextResponse.json({ id: 1, name: body.name });
}

export function DELETE(request: NextRequest, { params: { id } }: Props) {
  if (id > 10)
    return NextResponse.json({ error: "USER NOT FOUND" }, { status: 404 });
  if (id < 10) return NextResponse.json({});
}
